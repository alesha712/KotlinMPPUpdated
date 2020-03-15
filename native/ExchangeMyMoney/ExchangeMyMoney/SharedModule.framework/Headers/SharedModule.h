#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedModuleErrorException, SharedModuleConversionRates, SharedModuleKtor_httpUrl, SharedModuleConversionsModel, SharedModuleConvertedResultModel, SharedModuleKtor_httpURLProtocol, SharedModuleKotlinArray, SharedModuleKotlinx_serialization_runtimeSerialKind, SharedModuleKotlinNothing, SharedModuleKotlinx_serialization_runtimeUpdateMode, SharedModuleKotlinEnum;

@protocol SharedModuleKotlinx_serialization_runtimeKSerializer, SharedModuleKotlinx_serialization_runtimeEncoder, SharedModuleKotlinx_serialization_runtimeSerialDescriptor, SharedModuleKotlinx_serialization_runtimeSerializationStrategy, SharedModuleKotlinx_serialization_runtimeDecoder, SharedModuleKotlinx_serialization_runtimeDeserializationStrategy, SharedModuleKtor_httpParameters, SharedModuleKotlinx_serialization_runtimeCompositeEncoder, SharedModuleKotlinx_serialization_runtimeSerialModule, SharedModuleKotlinAnnotation, SharedModuleKotlinx_serialization_runtimeCompositeDecoder, SharedModuleKotlinMapEntry, SharedModuleKtor_utilsStringValues, SharedModuleKotlinIterator, SharedModuleKotlinx_serialization_runtimeSerialModuleCollector, SharedModuleKotlinKClass, SharedModuleKotlinComparable, SharedModuleKotlinKDeclarationContainer, SharedModuleKotlinKAnnotatedElement, SharedModuleKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SharedModuleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedModuleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SharedModuleNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SharedModuleByte : SharedModuleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SharedModuleUByte : SharedModuleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SharedModuleShort : SharedModuleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SharedModuleUShort : SharedModuleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SharedModuleInt : SharedModuleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SharedModuleUInt : SharedModuleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SharedModuleLong : SharedModuleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SharedModuleULong : SharedModuleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SharedModuleFloat : SharedModuleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SharedModuleDouble : SharedModuleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SharedModuleBoolean : SharedModuleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionRates")))
@interface SharedModuleConversionRates : KotlinBase
- (instancetype)initWithError:(SharedModuleErrorException * _Nullable)error date:(NSString * _Nullable)date rates:(SharedModuleMutableDictionary<NSString *, NSString *> * _Nullable)rates base:(NSString * _Nullable)base currenciesList:(NSMutableArray<NSString *> *)currenciesList __attribute__((swift_name("init(error:date:rates:base:currenciesList:)"))) __attribute__((objc_designated_initializer));
- (SharedModuleErrorException * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedModuleMutableDictionary<NSString *, NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSMutableArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (SharedModuleConversionRates *)doCopyError:(SharedModuleErrorException * _Nullable)error date:(NSString * _Nullable)date rates:(SharedModuleMutableDictionary<NSString *, NSString *> * _Nullable)rates base:(NSString * _Nullable)base currenciesList:(NSMutableArray<NSString *> *)currenciesList __attribute__((swift_name("doCopy(error:date:rates:base:currenciesList:)")));
- (void)createRatesList __attribute__((swift_name("createRatesList()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable base __attribute__((swift_name("base")));
@property NSMutableArray<NSString *> *currenciesList __attribute__((swift_name("currenciesList")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property SharedModuleErrorException * _Nullable error __attribute__((swift_name("error")));
@property (readonly) SharedModuleMutableDictionary<NSString *, NSString *> * _Nullable rates __attribute__((swift_name("rates")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionRates.Companion")))
@interface SharedModuleConversionRatesCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionsApi")))
@interface SharedModuleConversionsApi : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) SharedModuleKtor_httpUrl *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) SharedModuleKtor_httpUrl *exchangeRate __attribute__((swift_name("exchangeRate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CacheManager")))
@interface SharedModuleCacheManager : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cacheManager __attribute__((swift_name("init()")));
- (void)addRateToHashBase:(NSString *)base value:(NSString *)value exchangeRate:(NSString *)exchangeRate __attribute__((swift_name("addRateToHash(base:value:exchangeRate:)")));
- (NSString *)getSpecificExchangeRateBase:(NSString *)base value:(NSString *)value __attribute__((swift_name("getSpecificExchangeRate(base:value:)")));
- (BOOL)isExchangeRateAvailableBase:(NSString *)base value:(NSString *)value __attribute__((swift_name("isExchangeRateAvailable(base:value:)")));
- (BOOL)isRatesListAvailable __attribute__((swift_name("isRatesListAvailable()")));
- (void)saveBaseJsonAndRatedDictionaryJson:(NSString *)json list:(NSMutableArray<NSString *> *)list __attribute__((swift_name("saveBaseJsonAndRatedDictionary(json:list:)")));
@property NSString *baseRatesJson __attribute__((swift_name("baseRatesJson")));
@property NSMutableArray<NSString *> *currenciesList __attribute__((swift_name("currenciesList")));
@property SharedModuleMutableDictionary<NSString *, SharedModuleMutableDictionary<NSString *, NSString *> *> *exchangeRatesDictionary __attribute__((swift_name("exchangeRatesDictionary")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionsModel")))
@interface SharedModuleConversionsModel : KotlinBase
- (instancetype)initWithError:(SharedModuleErrorException * _Nullable)error currenciesList:(NSMutableArray<NSString *> *)currenciesList __attribute__((swift_name("init(error:currenciesList:)"))) __attribute__((objc_designated_initializer));
- (SharedModuleErrorException * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSMutableArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (SharedModuleConversionsModel *)doCopyError:(SharedModuleErrorException * _Nullable)error currenciesList:(NSMutableArray<NSString *> *)currenciesList __attribute__((swift_name("doCopy(error:currenciesList:)")));
- (void)createRatesListRates:(SharedModuleMutableDictionary<NSString *, NSString *> * _Nullable)rates __attribute__((swift_name("createRatesList(rates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setErrorStatusCode:(NSString *)statusCode message:(NSString *)message __attribute__((swift_name("setError(statusCode:message:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSMutableArray<NSString *> *currenciesList __attribute__((swift_name("currenciesList")));
@property SharedModuleErrorException * _Nullable error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionsModel.Companion")))
@interface SharedModuleConversionsModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertedResultModel")))
@interface SharedModuleConvertedResultModel : KotlinBase
- (instancetype)initWithError:(SharedModuleErrorException * _Nullable)error result:(NSString * _Nullable)result __attribute__((swift_name("init(error:result:)"))) __attribute__((objc_designated_initializer));
- (SharedModuleErrorException * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedModuleConvertedResultModel *)doCopyError:(SharedModuleErrorException * _Nullable)error result:(NSString * _Nullable)result __attribute__((swift_name("doCopy(error:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setErrorStatusCode:(NSString *)statusCode message:(NSString *)message __attribute__((swift_name("setError(statusCode:message:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SharedModuleErrorException * _Nullable error __attribute__((swift_name("error")));
@property NSString * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertedResultModel.Companion")))
@interface SharedModuleConvertedResultModelCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorException")))
@interface SharedModuleErrorException : KotlinBase
- (instancetype)initWithStatusCode:(NSString *)statusCode message:(NSString *)message __attribute__((swift_name("init(statusCode:message:)"))) __attribute__((objc_designated_initializer));
@property NSString *message __attribute__((swift_name("message")));
@property NSString *statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorException.Companion")))
@interface SharedModuleErrorExceptionCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionsRepo")))
@interface SharedModuleConversionsRepo : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)getConversionRatesCallBack:(void (^)(SharedModuleConversionsModel *))callBack __attribute__((swift_name("getConversionRates(callBack:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonKt")))
@interface SharedModuleCommonKt : KotlinBase
+ (void)convertRateBase:(NSString *)base convertTo:(NSString *)convertTo amount:(NSString *)amount callBack:(void (^)(SharedModuleConvertedResultModel *))callBack __attribute__((swift_name("convertRate(base:convertTo:amount:callBack:)")));
+ (NSString *)createApplicationScreenMessage __attribute__((swift_name("createApplicationScreenMessage()")));
+ (void)getConversionsListCallBack:(void (^)(SharedModuleConversionsModel *))callBack __attribute__((swift_name("getConversionsList(callBack:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface SharedModuleActualKt : KotlinBase
+ (void)makeLogText:(NSString *)text __attribute__((swift_name("makeLog(text:)")));
+ (NSString *)platformName __attribute__((swift_name("platformName()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionConstantsKt")))
@interface SharedModuleConversionConstantsKt : KotlinBase
@property (class, readonly) NSString *API_DATA __attribute__((swift_name("API_DATA")));
@property (class, readonly) NSString *BASE_RESPONSE_ERROR __attribute__((swift_name("BASE_RESPONSE_ERROR")));
@property (class, readonly) NSString *CACHE_DATA __attribute__((swift_name("CACHE_DATA")));
@property (class, readonly) NSString *EXCHANGE_BASE __attribute__((swift_name("EXCHANGE_BASE")));
@property (class, readonly) NSString *EXCHANGE_SYMBOLS __attribute__((swift_name("EXCHANGE_SYMBOLS")));
@property (class, readonly) double MAX_AMOUNT __attribute__((swift_name("MAX_AMOUNT")));
@property (class, readonly) NSString *MPP_LOG_TAG __attribute__((swift_name("MPP_LOG_TAG")));
@property (class, readonly) NSString *PARSING_EXCEPTION __attribute__((swift_name("PARSING_EXCEPTION")));
@property (class, readonly) NSString *SERVER_LOG_RESPONSE __attribute__((swift_name("SERVER_LOG_RESPONSE")));
@property (class, readonly) NSString *SERVER_LOG_SENDING_REQUEST __attribute__((swift_name("SERVER_LOG_SENDING_REQUEST")));
@property (class, readonly) NSString *SERVER_METHOD __attribute__((swift_name("SERVER_METHOD")));
@property (class, readonly) NSString *UNKNOWN_ERROR_CODE __attribute__((swift_name("UNKNOWN_ERROR_CODE")));
@property (class, readonly) NSString *UNKNOWN_ERROR_MESSAGE __attribute__((swift_name("UNKNOWN_ERROR_MESSAGE")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConversionsUtilsKt")))
@interface SharedModuleConversionsUtilsKt : KotlinBase
+ (NSString *)convertRatesWithAmountExchangeRate:(double)exchangeRate amount:(double)amount __attribute__((swift_name("convertRatesWithAmount(exchangeRate:amount:)")));
+ (NSString *)formatNumber:(double)receiver digits:(int32_t)digits __attribute__((swift_name("formatNumber(_:digits:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol SharedModuleKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedModuleKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol SharedModuleKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedModuleKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedModuleKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol SharedModuleKotlinx_serialization_runtimeKSerializer <SharedModuleKotlinx_serialization_runtimeSerializationStrategy, SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SharedModuleKtor_httpUrl : KotlinBase
- (instancetype)initWithProtocol:(SharedModuleKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedModuleKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (SharedModuleKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SharedModuleKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SharedModuleKtor_httpUrl *)doCopyProtocol:(SharedModuleKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SharedModuleKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SharedModuleKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SharedModuleKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol SharedModuleKotlinx_serialization_runtimeEncoder
@required
- (id<SharedModuleKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SharedModuleKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SharedModuleKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(SharedModuleKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedModuleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedModuleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SharedModuleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol SharedModuleKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<SharedModuleKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SharedModuleKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedModuleKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol SharedModuleKotlinx_serialization_runtimeDecoder
@required
- (id<SharedModuleKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(SharedModuleKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedModuleKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SharedModuleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SharedModuleKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SharedModuleKtor_httpURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedModuleKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SharedModuleKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SharedModuleKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SharedModuleKtor_httpParameters <SharedModuleKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol SharedModuleKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SharedModuleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SharedModuleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SharedModuleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedModuleKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SharedModuleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedModuleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol SharedModuleKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<SharedModuleKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<SharedModuleKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SharedModuleKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedModuleKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<SharedModuleKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedModuleKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface SharedModuleKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol SharedModuleKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SharedModuleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SharedModuleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<SharedModuleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) SharedModuleKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedModuleKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedModuleKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedModuleKotlinEnum : KotlinBase <SharedModuleKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedModuleKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface SharedModuleKotlinx_serialization_runtimeUpdateMode : SharedModuleKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedModuleKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SharedModuleKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SharedModuleKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(SharedModuleKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SharedModuleKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedModuleKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol SharedModuleKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<SharedModuleKotlinKClass>)kClass serializer:(id<SharedModuleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedModuleKotlinKClass>)baseClass actualClass:(id<SharedModuleKotlinKClass>)actualClass actualSerializer:(id<SharedModuleKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedModuleKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedModuleKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedModuleKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedModuleKotlinKClass <SharedModuleKotlinKDeclarationContainer, SharedModuleKotlinKAnnotatedElement, SharedModuleKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
