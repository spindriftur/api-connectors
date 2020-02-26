//
// WalletBalanceBase.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Get account withdraw balance response */

public struct WalletBalanceBase: Codable {

    public var retCode: Double?
    public var retMsg: String?
    public var extCode: String?
    public var extInfo: String?
    public var result: Any?
    public var timeNow: String?

    public init(retCode: Double?, retMsg: String?, extCode: String?, extInfo: String?, result: Any?, timeNow: String?) {
        self.retCode = retCode
        self.retMsg = retMsg
        self.extCode = extCode
        self.extInfo = extInfo
        self.result = result
        self.timeNow = timeNow
    }

    public enum CodingKeys: String, CodingKey { 
        case retCode = "ret_code"
        case retMsg = "ret_msg"
        case extCode = "ext_code"
        case extInfo = "ext_info"
        case result
        case timeNow = "time_now"
    }


}

