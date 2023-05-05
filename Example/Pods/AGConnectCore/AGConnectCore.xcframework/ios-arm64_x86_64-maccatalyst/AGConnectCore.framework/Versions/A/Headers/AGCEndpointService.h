//
//  Copyright (c) Huawei Technologies Co., Ltd. 2020. All rights reserved
//

#import <HMFoundation/HMFoundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol AGCEndpointService <NSObject>

- (HMFTask<NSString *> *)getEndpointDomain:(BOOL)forceRefresh;

@end

NS_ASSUME_NONNULL_END
