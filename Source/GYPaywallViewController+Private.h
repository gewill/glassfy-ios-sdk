//
//  GYPaywallViewController+Private.h
//  Glassfy
//
//  Created by Luca Garbolino on 13/10/21.
//

#if TARGET_OS_IPHONE & !TARGET_OS_TV
API_UNAVAILABLE_BEGIN(macos, watchos, tvos)

#import "GYPaywallViewController.h"
@class GYAPIPaywallResponse;
@class GYSku;

NS_ASSUME_NONNULL_BEGIN

@interface GYPaywallViewController (Private)

+ (GYPaywallViewController*)instanceWithPaywall:(GYPaywall *)paywall;
                           
@end

NS_ASSUME_NONNULL_END

API_UNAVAILABLE_END
#endif
