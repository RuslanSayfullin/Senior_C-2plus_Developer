#include <linux/rcupdate.h>

struct Foo {
    int x;
    int y;
};

Foo foo = {1, 2};

rcu_read_lock();
int x = foo.x;
int y = foo.y;
rcu_read_unlock();

// Модификация foo в другом потоке
rcu_assign_pointer(foo, new_foo);
synchronize_rcu();
