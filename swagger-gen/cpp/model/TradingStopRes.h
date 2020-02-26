/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * TradingStopRes.h
 *
 * Set Trading-Stop Condition response
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TradingStopRes_H_
#define IO_SWAGGER_CLIENT_MODEL_TradingStopRes_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Set Trading-Stop Condition response
/// </summary>
class  TradingStopRes
    : public ModelBase
{
public:
    TradingStopRes();
    virtual ~TradingStopRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TradingStopRes members

    /// <summary>
    /// 
    /// </summary>
    double getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();
    void setUserId(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSize() const;
    bool sizeIsSet() const;
    void unsetSize();
    void setSize(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPositionValue() const;
    bool positionValueIsSet() const;
    void unsetPosition_value();
    void setPositionValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getEntryPrice() const;
    bool entryPriceIsSet() const;
    void unsetEntry_price();
    void setEntryPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRiskId() const;
    bool riskIdIsSet() const;
    void unsetRisk_id();
    void setRiskId(double value);
    /// <summary>
    /// 
    /// </summary>
    double getAutoAddMargin() const;
    bool autoAddMarginIsSet() const;
    void unsetAuto_add_margin();
    void setAutoAddMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLeverage() const;
    bool leverageIsSet() const;
    void unsetLeverage();
    void setLeverage(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPositionMargin() const;
    bool positionMarginIsSet() const;
    void unsetPosition_margin();
    void setPositionMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLiqPrice() const;
    bool liqPriceIsSet() const;
    void unsetLiq_price();
    void setLiqPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getBustPrice() const;
    bool bustPriceIsSet() const;
    void unsetBust_price();
    void setBustPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOccClosingFee() const;
    bool occClosingFeeIsSet() const;
    void unsetOcc_closing_fee();
    void setOccClosingFee(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOccFundingFee() const;
    bool occFundingFeeIsSet() const;
    void unsetOcc_funding_fee();
    void setOccFundingFee(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTakeProfit() const;
    bool takeProfitIsSet() const;
    void unsetTake_profit();
    void setTakeProfit(double value);
    /// <summary>
    /// 
    /// </summary>
    double getStopLoss() const;
    bool stopLossIsSet() const;
    void unsetStop_loss();
    void setStopLoss(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPositionStatus() const;
    bool positionStatusIsSet() const;
    void unsetPosition_status();
    void setPositionStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getDeleverageIndicator() const;
    bool deleverageIndicatorIsSet() const;
    void unsetDeleverage_indicator();
    void setDeleverageIndicator(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOcCalcData() const;
    bool ocCalcDataIsSet() const;
    void unsetOc_calc_data();
    void setOcCalcData(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getOrderMargin() const;
    bool orderMarginIsSet() const;
    void unsetOrder_margin();
    void setOrderMargin(double value);
    /// <summary>
    /// 
    /// </summary>
    double getWalletBalance() const;
    bool walletBalanceIsSet() const;
    void unsetWallet_balance();
    void setWalletBalance(double value);
    /// <summary>
    /// 
    /// </summary>
    double getRealisedPnl() const;
    bool realisedPnlIsSet() const;
    void unsetRealised_pnl();
    void setRealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCumRealisedPnl() const;
    bool cumRealisedPnlIsSet() const;
    void unsetCum_realised_pnl();
    void setCumRealisedPnl(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCumCommission() const;
    bool cumCommissionIsSet() const;
    void unsetCum_commission();
    void setCumCommission(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCrossSeq() const;
    bool crossSeqIsSet() const;
    void unsetCross_seq();
    void setCrossSeq(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPositionSeq() const;
    bool positionSeqIsSet() const;
    void unsetPosition_seq();
    void setPositionSeq(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();
    void setCreatedAt(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdated_at();
    void setUpdatedAt(utility::string_t value);

protected:
    double m_Id;
    bool m_IdIsSet;
    double m_User_id;
    bool m_User_idIsSet;
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    double m_Size;
    bool m_SizeIsSet;
    double m_Position_value;
    bool m_Position_valueIsSet;
    double m_Entry_price;
    bool m_Entry_priceIsSet;
    double m_Risk_id;
    bool m_Risk_idIsSet;
    double m_Auto_add_margin;
    bool m_Auto_add_marginIsSet;
    double m_Leverage;
    bool m_LeverageIsSet;
    double m_Position_margin;
    bool m_Position_marginIsSet;
    double m_Liq_price;
    bool m_Liq_priceIsSet;
    double m_Bust_price;
    bool m_Bust_priceIsSet;
    double m_Occ_closing_fee;
    bool m_Occ_closing_feeIsSet;
    double m_Occ_funding_fee;
    bool m_Occ_funding_feeIsSet;
    double m_Take_profit;
    bool m_Take_profitIsSet;
    double m_Stop_loss;
    bool m_Stop_lossIsSet;
    utility::string_t m_Position_status;
    bool m_Position_statusIsSet;
    double m_Deleverage_indicator;
    bool m_Deleverage_indicatorIsSet;
    utility::string_t m_Oc_calc_data;
    bool m_Oc_calc_dataIsSet;
    double m_Order_margin;
    bool m_Order_marginIsSet;
    double m_Wallet_balance;
    bool m_Wallet_balanceIsSet;
    double m_Realised_pnl;
    bool m_Realised_pnlIsSet;
    double m_Cum_realised_pnl;
    bool m_Cum_realised_pnlIsSet;
    double m_Cum_commission;
    bool m_Cum_commissionIsSet;
    double m_Cross_seq;
    bool m_Cross_seqIsSet;
    double m_Position_seq;
    bool m_Position_seqIsSet;
    utility::string_t m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TradingStopRes_H_ */
