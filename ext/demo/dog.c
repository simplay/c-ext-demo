#include "ruby.h"

static VALUE baz(VALUE self) {
  return rb_str_new2("Nils <3!");
}

void Init_dog() {
    VALUE Dog = rb_define_module("Dog");
    rb_define_singleton_method(Dog, "baz", baz, 0);
}
