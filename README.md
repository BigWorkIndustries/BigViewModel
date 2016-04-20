# BigViewModel
A collection of Objective-C macros that provide convenience methods for observing model objects on views.

[![Version](https://img.shields.io/cocoapods/v/BigViewModel.svg?style=flat)](http://cocoapods.org/pods/BigViewModel)
[![License](https://img.shields.io/cocoapods/l/BigViewModel.svg?style=flat)](http://cocoapods.org/pods/BigViewModel)
[![Platform](https://img.shields.io/cocoapods/p/BigViewModel.svg?style=flat)](http://cocoapods.org/pods/BigViewModel)

## Requirements

* iOS
* Objective-C

## Installation

BigViewModel is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "BigViewModel"
```

## Usage

In your .h ``` @interface ``` add the ``` BIG_VIEW_MODEL_PROPERTY() ``` macro for example:

```objc

@interface MYViewControllerBase : UIViewController

BIG_VIEW_MODEL_PROPERTY(MyAwesomeModelType*)

@end

```

And in your .m ``` @implementation ``` add the ``` BIG_VIEW_MODEL_KVO() ``` macro for example:

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

* Note: If you don't override the ``` - (void)big_didUpdateModel: ``` method, a compiler warning will be generated. If you don't plan to implement that method, you can use the ``` BIG_VIEW_MODEL_PROPERTY_ONLY() ``` method instead of the ``` BIG_VIEW_MODEL_PROPERTY() ``` method in your .h class header file. 


## Author

* BigViewModel is developed by [Vincil Bishop](vincil@bigworkindustries.com) of Big Work Industries, LLC. 
* Check out our other repositories [here](https://github.com/BigWorkIndustries)
* Visit us online at [BigWorkIndustries.com](http://www.bigworkindustries.com)


## License

BigViewModel is available under the MIT license. See the LICENSE file for more info.
