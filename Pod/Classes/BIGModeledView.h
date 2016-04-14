//
//  BIGSingluarModelView.h
//  Pods
//
//  Created by Vincil Bishop on 10/1/15.
//
//

#import <Foundation/Foundation.h>

@protocol BIGSingluarModelView <NSObject>

@property (nonatomic,strong) id big_modelObject;

@optional

- (void)big_didUpdateModel:(id)model;

@end
