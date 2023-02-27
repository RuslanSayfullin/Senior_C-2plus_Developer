from django.db import models
from django.urls import reverse


class Category(models.Model):
    """Каталог товаров в магазинах обычно содержит объекты, сгруппированные по различным категориям."""
    name = models.CharField(max_length=200, db_index=True)
    slug = models.SlugField(max_length=200, unique=True)

    class Meta:
        ordering = ('name',)
        verbose_name = 'категория'
        verbose_name_plural = 'категорий'

    def __str__(self):
        return self.name

    def get_absolute_url(self):
        """Метод для получения канонического URL’а конкретного объекта"""
        return reverse('shop:product_list_by_category', args=[self.slug])


class Product(models.Model):
    """Каждый товар имеет название (часто – описание и фотографии), цену и информацию о наличии"""
    category = models.ForeignKey(Category, related_name='products', on_delete=models.CASCADE)
    name = models.CharField(max_length=200, db_index=True)
    slug = models.SlugField(max_length=200, db_index=True)
    image = models.ImageField(upload_to='products/%Y/%m/%d', blank=True)
    description = models.TextField(blank=True)
    price = models.DecimalField(max_digits=10, decimal_places=2)
    available = models.BooleanField(default=True)
    created = models.DateTimeField(auto_now_add=True)
    updated = models.DateTimeField(auto_now=True)

    class Meta:
        ordering = ('name',)
        index_together = (('id', 'slug'),)
        verbose_name = 'товар'
        verbose_name_plural = 'товары'

    def __str__(self):
        return self.name

    def get_absolute_url(self):
        """Метод для получения канонического URL’а конкретного объекта"""
        return reverse('shop:product_detail', args=[self.id, self.slug])

