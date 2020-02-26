#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Bybit API
* ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
*
* OpenAPI spec version: 1.0.0
* Contact: support@bybit.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol SWGWalletBalance
@end

@interface SWGWalletBalance : SWGObject


@property(nonatomic) NSNumber* equity;

@property(nonatomic) NSNumber* availableBalance;

@property(nonatomic) NSNumber* usedMargin;

@property(nonatomic) NSNumber* orderMargin;

@property(nonatomic) NSNumber* positionMargin;

@property(nonatomic) NSNumber* occClosingFee;

@property(nonatomic) NSNumber* occFundingFee;

@property(nonatomic) NSNumber* walletBalance;

@property(nonatomic) NSNumber* realisedPnl;

@property(nonatomic) NSNumber* unrealisedPnl;

@property(nonatomic) NSNumber* cumRealisedPnl;

@property(nonatomic) NSNumber* givenCash;

@property(nonatomic) NSNumber* serviceCash;

@end
