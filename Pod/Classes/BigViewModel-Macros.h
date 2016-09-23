//
//  BigViewModelMacros.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

//#ifndef BigViewModelMacros_h
//#define BigViewModelMacros_h

// HEADER / IMPLEMENTATION MACROS

/**
 *  Defines the bigModel property and didUpdateBigModel: method signature.
 *
 *  @param __TYPE__ The strong type of the bigModel property. e.g. NSString*
 *
 *  @discussion Add this macro in the .h header of the class file of which you wish to respond to didUpdateBigModel:. Calls BIG_VIEW_MODEL_PROPERTY_ONLY() and BIG_VIEW_MODEL_METHOD_SIGNATURE() macros internally.
 */
#define BIG_VIEW_MODEL_PROPERTY(__TYPE__) \
BIG_VIEW_MODEL_PROPERTY_ONLY(__TYPE__) \
BIG_VIEW_MODEL_METHOD_SIGNATURE(__TYPE__)

/**
 *  Defines the bigModel property;
 *
 *  @param __TYPE__ The strong type of the bigModel property. e.g. NSString*
 *
 *  @discussion Add this macro in the header of the class file of which you wish to respond to define the bigModel property.
 */
#define BIG_VIEW_MODEL_PROPERTY_ONLY(__TYPE__) \
@property (nonatomic,strong) __TYPE__ bigModel; \

/**
 *  Defines the didUpdateBigModel: method signature.
 *
 *  @param __TYPE__ The strong type of the didUpdateBigModel: sender. e.g. NSString*
 *
 *  @return Add this macro in the .h header of the class file of which you wish to respond to didUpdateBigModel:.
 */
#define BIG_VIEW_MODEL_METHOD_SIGNATURE(__TYPE__) \
- (void)didUpdateBigModel:(__TYPE__)bigModel;

/**
 *  Defines the implementation of the bigModel property and didUpdateBigModel: method signature.
 *
 *  @param __TYPE__ The strong type of the bigModel property. e.g. NSString*
 *
 *  @return Add this macro in the .m implementation class of the class file of which you wish to respond to didUpdateBigModel:. Implements a synthesized property and KVO observers for didUpdateBigModel:.
 */
#define BIG_VIEW_MODEL_KVO(__TYPE__) \
@synthesize bigModel = _bigModel; \
- (void)setBigModel:(__TYPE__)value { \
[self willChangeValueForKey:@"bigModel"]; \
_bigModel = value; \
[self didChangeValueForKey:@"bigModel"]; \
if ([self respondsToSelector:@selector(didUpdateBigModel:)]) { \
[self performSelector:@selector(didUpdateBigModel:) withObject:value]; \
} \
}

//#endif /* BigViewModelMacros_h */