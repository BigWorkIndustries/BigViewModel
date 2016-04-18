# BigViewModel
A collection of Objective-C macros that provide convenience methods for observing model objects on views.

[![Version](https://img.shields.io/cocoapods/v/BigViewModel.svg?style=flat)](http://cocoapods.org/pods/BigViewModel)
[![License](https://img.shields.io/cocoapods/l/BigViewModel.svg?style=flat)](http://cocoapods.org/pods/BigViewModel)
[![Platform](https://img.shields.io/cocoapods/p/BigViewModel.svg?style=flat)](http://cocoapods.org/pods/BigViewModel)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

BigViewModel is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "BigViewModel"
```

## Use

In your .h ``` @interface ``` add ```BIG_MODEL_INTERFACE ``` like this:

```objc

@interface MYViewControllerBase : UIViewController

BIG_MODEL_INTERFACE

@end

```

And in your .m ``` @implementation ``` add ```BIG_IMPLEMENT_SET_MODEL```

```objc

@implementation MYViewControllerBase

BIG_IMPLEMENT_SET_MODEL

@end

```

These macros implement a model object property in the class:

```objc

@property (nonatomic,strong) id big_modelObject;

```

And a KVO observation for model object changes that can be accessed by overriding the following instance method: 

```objc

- (void)big_didUpdateModel:(id)model

```

As a convenience in your .m ``` @implementation ``` add ```BIG_STRONG_MODEL_ACCESSOR(MyAwesomeModelType)``` and the following accessor will be implemented: 

```objc

- (MyAwesomeModelType*) big_strongModel

```


As a convenience in your .m ``` @implementation ``` you can also declare the interface using the ```BIG_MODEL_INTERFACE(MyAwesomeModelType)``` and the following property will be implemented: 

```objc

@property (nonatomic,strong) MyAwesomeModelType *big_modelObject;


```


## Author

Vincil Bishop, vincil@bigworkindustries.com

## License

BigViewModel is available under the MIT license. See the LICENSE file for more info.
