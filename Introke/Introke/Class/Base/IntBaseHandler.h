//
//  IntBaseHandler.h
//  Introke
//
//  Created by zhouMR on 16/10/11.
//  Copyright © 2016年 luowei. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^SuccessBlock)(id json);
typedef void (^FailureBlock)(id error);

@interface IntBaseHandler : NSObject

@end
