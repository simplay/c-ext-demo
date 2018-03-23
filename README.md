# Foobar

## Compile

```
cd ext/demo
ruby extconf.rb
make
```

## Usage

Inside irb / pry

```
require_relative 'ext/demo/dog.so'
Dog.baz #=> "Nils <3!"
```
