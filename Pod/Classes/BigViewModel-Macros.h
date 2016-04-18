//
//  BigViewModelMacros.h
//  Pods
//
//  Created by Vincil Bishop on 2/1/16.
//
//

#ifndef BigViewModelMacros_h
#define BigViewModelMacros_h

#define BIG_VIEW_MODEL_INTERFACE(__CLASS__, __SUPERCLASS__) \
@interface __CLASS__ : __SUPERCLASS__ <BIGSingluarModelView>  \
BIG_MODEL_INTERFACE \
@end

#define BIG_VIEW_MODEL_IMPLEMENTATION(__CLASS_NAME__) \
@implementation __CLASS_NAME__ \
BIG_IMPLEMENT_SET_MODEL \
@end

#define BIG_MODEL_INTERFACE \
@property (nonatomic,strong) id big_modelObject;

#define BIG_STRONG_MODEL_INTERFACE(__CLASS__) \
@property (nonatomic,strong) __CLASS__ *big_modelObject;

#define BIG_IMPLEMENT_SET_MODEL \
@synthesize big_modelObject = _big_modelObject; \
- (void)setbig_modelObject:(id)modelObject { \
[self willChangeValueForKey:@"big_modelObject"]; \
_big_modelObject = modelObject; \
[self didChangeValueForKey:@"big_modelObject"]; \
if ([self respondsToSelector:@selector(big_didUpdateModel:)]) { \
[self performSelector:@selector(big_didUpdateModel:) withObject:modelObject]; \
} \
} \
BIG_IMPLEMENT_DID_UPDATE_MODEL

#define BIG_IMPLEMENT_DID_UPDATE_MODEL \
- (void)big_didUpdateModel:(id)model { \
} \

#define BIG_STRONG_MODEL_ACCESSOR(__CLASS__) \
- (__CLASS__*) big_strongModel { \
return self.big_modelObject; \
}

#endif /* BigViewModelMacros_h */