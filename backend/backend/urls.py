from django.contrib import admin
from django.conf.urls.static import static
from backend import settings_db_debug, settings
from django.urls import path, include

from django.views.decorators.csrf import csrf_exempt    # не используем функции защиты (CSRF) шаблонизатора Django
from graphene_django.views import GraphQLView


urlpatterns = [
    path('admin/', admin.site.urls),
    path('graphql', csrf_exempt(GraphQLView.as_view(graphiql=True))),
    # path('', include('blog.urls')),
]

if settings_db_debug.DEBUG:
    import debug_toolbar
    urlpatterns = [
        path('__debug__/', include(debug_toolbar.urls)),
    ] + urlpatterns

    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
