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
@property (nonatomic,strong) __TYPE__ big_model; \
- (void)big_didUpdateModel:(__TYPE__)big_model;

#define BIG_VIEW_MODEL_KVO(__TYPE__) \
@synthesize big_model = _big_model; \
- (void)setbig_model:(__TYPE__)value { \
[self willChangeValueForKey:@"big_model"]; \
_big_model = value; \
[self didChangeValueForKey:@"big_model"]; \
if ([self respondsToSelector:@selector(big_didUpdateModel:)]) { \
[self performSelector:@selector(big_didUpdateModel:) withObject:value]; \
} \
}

// CONVENIENCE CLASS INTERFACE / IMPLEMENTATION MACROS

#define BIG_VIEW_MODEL_CLASS_INTERFACE(__CLASS__, __SUPERCLASS__, __TYPE__) \
@interface __CLASS__ : __SUPERCLASS__ <BIGSingluarModelView>  \
BIG_VIEW_MODEL_PROPERTY(__TYPE__) \
@end

#define BIG_VIEW_MODEL_CLASS_IMPLEMENTATION(__CLASS_NAME__, __TYPE__) \
@implementation __CLASS_NAME__ \
BIG_VIEW_MODEL_KVO(__TYPE__) \
@end

#endif /* BigViewModelMacros_h */