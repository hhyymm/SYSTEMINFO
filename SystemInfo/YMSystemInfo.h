//
//  YMSystemInfo.h
//  SystemInfo
//
//  Created by F H on 2016/12/1.
//  Copyright © 2016年 XX. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface YMSystemInfo : NSObject
//1.获取电池电量(一般用百分数表示,大家自行处理就好)
-(CGFloat)getBatteryQuantity;

//2.获取电池状态(UIDeviceBatteryState为枚举类型)
-(UIDeviceBatteryState)getBatteryStauts;

//3.获取总内存大小
-(long long)getTotalMemorySize;

//4.获取当前可用内存
-(long long)getAvailableMemorySize;

//5.获取已使用内存
- (double)getUsedMemory;

//7.获取可用磁盘容量
-(long long)getAvailableDiskSize;

//8.容量转换
-(NSString *)fileSizeToString:(unsigned long long)fileSize;

//9.型号
+ (NSString *)getCurrentDeviceModel:(UIViewController *)controller;

//10.IP地址
- (NSString *)deviceIPAdress;

//11.当前手机连接的WIFI名称(SSID)
- (NSString *)getWifiName;

//12.ssid信息
- (id)fetchSSIDInfo;

/***  13. 路由器BSSID (没连上WiFi则返回@“”)  */
- (NSString*)bssid;

/***   14. 路由器SSID (没连上WiFi则返回@“”)  */
- (NSString*)ssid;


@end
