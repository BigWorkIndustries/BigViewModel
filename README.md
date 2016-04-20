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

In your .h ``` @interface ``` add ``` BIG_VIEW_MODEL_PROPERTY() ``` for example:

```objc

@interface MYViewControllerBase : UIViewController

BIG_VIEW_MODEL_PROPERTY(MyAwesomeModelType*)

@end

```

And in your .m ``` @implementation ``` add ``` BIG_VIEW_MODEL_KVO() ``` for example:

```objc

@implementation MYViewControllerBase

BIG_VIEW_MODEL_KVO(MyAwesomeModelType*)

@end

```

These macros implement a model object property and method signature in the class, for example:

```objc

@property (nonatomic,strong) MyAwesomeModelType* big_model;

- (void)big_didUpdateModel:(MyAwesomeModelType*)big_model;

```

Implement the ``` - (void)big_didUpdateModel: ``` method in the .m file of the class, ror example: 

```objc

- (void)big_didUpdateModel:(MyAwesomeModelType*)big_model
{
    // 
}

```

The ``` - (void)big_didUpdateModel: ``` method will be called whenever the self.big_model property is changed.


## Author

Vincil Bishop, vincil@bigworkindustries.com

## License

BigViewModel is available under the MIT license. See the LICENSE file for more info.
