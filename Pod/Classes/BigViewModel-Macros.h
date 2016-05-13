//
//  BigViewModelMacros.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

#ifndef BigViewModelMacros_h
#define BigViewModelMacros_h

// HEADER / IMPLEMENTATION MACROS

#define BIG_VIEW_MODEL_PROPERTY(__TYPE__) \
BIG_VIEW_MODEL_PROPERTY_ONLY(__TYPE__) \
BIG_VIEW_MODEL_METHOD_SIGNATURE(__TYPE__)

#define BIG_VIEW_MODEL_PROPERTY_ONLY(__TYPE__) \
@property (nonatomic,strong) __TYPE__ bigModel; \

#define BIG_VIEW_MODEL_METHOD_SIGNATURE(__TYPE__) \
- (void)didUpdateBigModel:(__TYPE__)bigModel;

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

#endif /* BigViewModelMacros_h */