// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Snapcall_Framework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif






SWIFT_CLASS("_TtC18Snapcall_Framework8SCClient") SWIFT_AVAILABILITY(ios,introduced=10.0)
@interface SCClient : NSObject
/// basic init for a client.
/// will register for snapcall Event.
/// author:
/// Pierre Noyelle
///
/// returns:
/// <SCClient>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class PKPushCredentials;
@class Snapcall_External_Parameter;
@class PKPushPayload;

SWIFT_CLASS("_TtC18Snapcall_Framework8Snapcall")
@interface Snapcall : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Null_unspecified AppName;)
+ (NSString * _Null_unspecified)AppName SWIFT_WARN_UNUSED_RESULT;
+ (void)setAppName:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Null_unspecified ringtoneSound;)
+ (NSString * _Null_unspecified)ringtoneSound SWIFT_WARN_UNUSED_RESULT;
+ (void)setRingtoneSound:(NSString * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSData * _Null_unspecified callIconTemplate;)
+ (NSData * _Null_unspecified)callIconTemplate SWIFT_WARN_UNUSED_RESULT;
+ (void)setCallIconTemplate:(NSData * _Nullable)value;
- (BOOL)registerUserWithCredential:(PKPushCredentials * _Nonnull)credential identifier:(NSString * _Null_unspecified)identifier customClientIdentifier:(NSString * _Null_unspecified)customClientIdentifier applicationName:(NSString * _Nonnull)applicationName snapcallIdentifierCallBack:(void (^ _Null_unspecified)(NSString * _Nullable))snapcallIdentifierCallBack SWIFT_WARN_UNUSED_RESULT;
- (BOOL)registerUserWithToken:(NSString * _Nonnull)token identifier:(NSString * _Null_unspecified)identifier customClientIdentifier:(NSString * _Null_unspecified)customClientIdentifier applicationName:(NSString * _Nonnull)applicationName snapcallIdentifierCallBack:(void (^ _Null_unspecified)(NSString * _Nullable))snapcallIdentifierCallBack SWIFT_WARN_UNUSED_RESULT;
- (BOOL)setUserActiveWithActive:(BOOL)active credential:(PKPushCredentials * _Nonnull)credential identifier:(NSString * _Null_unspecified)identifier customClientIdentifier:(NSString * _Null_unspecified)customClientIdentifier applicationName:(NSString * _Nonnull)applicationName snapcallCallBack:(void (^ _Null_unspecified)(BOOL))snapcallCallBack SWIFT_WARN_UNUSED_RESULT;
- (BOOL)setUserActiveWithActive:(BOOL)active token:(NSString * _Nonnull)token identifier:(NSString * _Null_unspecified)identifier customClientIdentifier:(NSString * _Null_unspecified)customClientIdentifier applicationName:(NSString * _Nonnull)applicationName snapcallCallBack:(void (^ _Null_unspecified)(BOOL))snapcallCallBack SWIFT_WARN_UNUSED_RESULT;
- (void)buttonIsClosedWithBid_id:(NSString * _Nonnull)bid_id snapcallCallBack:(void (^ _Null_unspecified)(BOOL))snapcallCallBack;
- (void)launchCallWithBidId:(NSString * _Nonnull)bidId parameter:(Snapcall_External_Parameter * _Null_unspecified)parameter SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)launchCallWithBidId:(NSString * _Nonnull)bidId sendClientMessage:(void (^ _Null_unspecified)(NSString * _Nonnull))sendClientMessage parameter:(Snapcall_External_Parameter * _Null_unspecified)parameter SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)launchCallWithBidId:(NSString * _Nonnull)bidId applicationName:(NSString * _Nonnull)applicationName customClientIdentifier:(NSString * _Nonnull)customClientIdentifier parameter:(Snapcall_External_Parameter * _Null_unspecified)parameter SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)launchCallWithBidId:(NSString * _Nonnull)bidId snapcallIdentifier:(NSString * _Nonnull)snapcallIdentifier parameter:(Snapcall_External_Parameter * _Null_unspecified)parameter SWIFT_AVAILABILITY(ios,introduced=10.0);
- (void)restorCallUI SWIFT_AVAILABILITY(ios,introduced=10.0);
- (NSString * _Nullable)decodePushDataWithPushKitPayload:(PKPushPayload * _Null_unspecified)pushKitPayload SWIFT_WARN_UNUSED_RESULT;
- (void)receiveCallWithPushKitPayload:(PKPushPayload * _Null_unspecified)pushKitPayload parameter:(Snapcall_External_Parameter * _Null_unspecified)parameter SWIFT_AVAILABILITY(ios,introduced=10.0);
- (BOOL)requestPermission SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isPermissionRequestGranted SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
+ (Snapcall * _Nonnull)getSnapcall SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=10.0);
+ (void)releaseSnapcall;
@end

@class NSString;

SWIFT_PROTOCOL("_TtP18Snapcall_Framework22Snapcall_eventListener_")
@protocol Snapcall_eventListener
- (void)onStart;
- (void)onErrorWithError:(NSString * _Nonnull)error;
- (void)onCallStart;
- (void)onUIStart;
- (void)onTimeWithTime:(NSInteger)time;
- (void)onUIEnd;
- (void)onCallEnd;
- (void)onEnd;
@end


@interface Snapcall (SWIFT_EXTENSION(Snapcall_Framework)) <Snapcall_eventListener>
- (void)onStart;
- (void)onErrorWithError:(NSString * _Nonnull)error;
- (void)onCallStart;
- (void)onUIStart;
- (void)onTimeWithTime:(NSInteger)time;
- (void)onUIEnd;
- (void)onCallEnd;
- (void)onEnd;
- (NSInteger)addEventListenerWithListener:(id <Snapcall_eventListener> _Nonnull)listener SWIFT_WARN_UNUSED_RESULT;
- (void)removeEventListenerWithIndex:(NSInteger)index;
- (void)removeAllEventListener;
@end

@class UIColor;
@class UIFontDescriptor;

SWIFT_CLASS("_TtC18Snapcall_Framework27Snapcall_External_Parameter")
@interface Snapcall_External_Parameter : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified urlImage;
@property (nonatomic, copy) NSString * _Null_unspecified nameImage;
@property (nonatomic) BOOL shouldReturn;
@property (nonatomic, copy) NSString * _Null_unspecified callTitle;
@property (nonatomic, copy) NSString * _Null_unspecified displayName;
@property (nonatomic, copy) NSString * _Null_unspecified displayBrand;
@property (nonatomic, copy) NSString * _Null_unspecified senderName;
@property (nonatomic, copy) NSString * _Null_unspecified senderBrand;
@property (nonatomic) BOOL hideCart;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic, strong) UIColor * _Null_unspecified backgroundColor;
@property (nonatomic, strong) NSMutableDictionary * _Null_unspecified externalContext;
@property (nonatomic, copy) NSString * _Null_unspecified pushTransfertData;
@property (nonatomic, strong) UIFontDescriptor * _Null_unspecified fontDescriptor;
@property (nonatomic, copy) NSString * _Null_unspecified androidNotificationTitle;
@property (nonatomic, copy) NSString * _Null_unspecified androidNotificatiobBody;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// WebSocket objects are bidirectional network streams that communicate over HTTP. RFC 6455.
SWIFT_CLASS("_TtC18Snapcall_Framework18Snapcall_WebSocket")
@interface Snapcall_WebSocket : NSObject
@property (nonatomic, readonly) NSUInteger hash;
/// Create a WebSocket object with a deferred connection; the connection is not opened until the .open() method is called.
- (nonnull instancetype)init;
@end


@interface Snapcall_WebSocket (SWIFT_EXTENSION(Snapcall_Framework))
/// Transmits message to the server over the WebSocket connection.
/// :param: text The message (string) to be sent to the server.
- (void)sendWithText:(NSString * _Nonnull)text;
/// Transmits message to the server over the WebSocket connection.
/// :param: data The message (binary) to be sent to the server.
- (void)sendWithData:(NSData * _Nonnull)data;
@end




@class NSError;

/// WebSocketDelegate is an Objective-C alternative to WebSocketEvents and is used to delegate the events for the WebSocket connection.
SWIFT_PROTOCOL("_TtP18Snapcall_Framework17WebSocketDelegate_")
@protocol WebSocketDelegate
/// A function to be called when the WebSocket connection’s readyState changes to .Open; this indicates that the connection is ready to send and receive data.
- (void)webSocketOpen;
/// A function to be called when the WebSocket connection’s readyState changes to .Closed.
- (void)webSocketClose:(NSInteger)code reason:(NSString * _Nonnull)reason wasClean:(BOOL)wasClean;
/// A function to be called when an error occurs.
- (void)webSocketError:(NSError * _Nonnull)error;
@optional
/// A function to be called when a message (string) is received from the server.
- (void)webSocketMessageText:(NSString * _Nonnull)text;
/// A function to be called when a message (binary) is received from the server.
- (void)webSocketMessageData:(NSData * _Nonnull)data;
/// A function to be called when a pong is received from the server.
- (void)webSocketPong;
/// A function to be called when the WebSocket process has ended; this event is guarenteed to be called once and can be used as an alternative to the “close” or “error” events.
- (void)webSocketEnd:(NSInteger)code reason:(NSString * _Nonnull)reason wasClean:(BOOL)wasClean error:(NSError * _Nullable)error;
@end

/// The WebSocketReadyState enum is used by the readyState property to describe the status of the WebSocket connection.
typedef SWIFT_ENUM(NSInteger, WebSocketReadyState, closed) {
/// The connection is not yet open.
  WebSocketReadyStateConnecting = 0,
/// The connection is open and ready to communicate.
  WebSocketReadyStateOpen = 1,
/// The connection is in the process of closing.
  WebSocketReadyStateClosing = 2,
/// The connection is closed or couldn’t be opened.
  WebSocketReadyStateClosed = 3,
};


/// Allow to give access to the developer to call information needed
/// to develop a nice experience with snapcall.
/// It implement the codable protocole in order to save it to file and
/// recreate it back when needed.
/// It serve to make snapcall api request about the call.
SWIFT_CLASS("_TtC18Snapcall_Framework11objc_SCCall")
@interface objc_SCCall : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC18Snapcall_Framework18objc_SCClientEvent")
@interface objc_SCClientEvent : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Function the developer have to implement in order to make a custom UI
/// author:
/// Pierre Noyelle
SWIFT_PROTOCOL("_TtP18Snapcall_Framework21objc_SCClientListener_")
@protocol objc_SCClientListener
/// Will be called each time the SDK process will start
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onConnectionReady:(objc_SCClientEvent * _Nonnull)parameter;
/// Will be called When we succefully gather the information from the database about the call
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onCreated:(objc_SCClientEvent * _Nonnull)parameter;
/// called when ring start - the remote leg receive the call the media start
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onRinging:(objc_SCClientEvent * _Nonnull)parameter;
/// when the call is answered on the other side.
/// if in queue mode the email of the agent will be accessible
/// the timer will start , you will receive tick
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onAnswer:(objc_SCClientEvent * _Nonnull)parameter;
/// Called when the internet connection shut down during the next 15s if internet
/// come back the call will be reconnected
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     <objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onInternetDown:(objc_SCClientEvent * _Nonnull)parameter;
/// Called when the internet connection come back.
/// The reconnection will occur
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onInternetUP:(objc_SCClientEvent * _Nonnull)parameter;
/// called when the call end.
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent> : an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onHangup:(objc_SCClientEvent * _Nonnull)parameter;
/// called when other leg put the call on hold.
/// the waiting sound will be sent.
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onHeld:(objc_SCClientEvent * _Nonnull)parameter;
/// called when other leg stop hold mode
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onUnheld:(objc_SCClientEvent * _Nonnull)parameter;
/// When Snapcall Process end .
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onConnectionShutDown;
/// called each time the call is muted
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onMuteChange:(objc_SCClientEvent * _Nonnull)parameter;
/// called each time the Audio output route change
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onSpeakerChange:(objc_SCClientEvent * _Nonnull)parameter;
/// Called when the sdk detect that an UI should be displayed to the user
/// to contole the call
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onUIRequest:(objc_SCClientEvent * _Nonnull)parameter;
/// called each second for timing monitor
/// author:
/// Pierre Noyelle
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     parameter<objc_SCClientEvent>: an Event that contain everything about call and hardware state
///   </li>
/// </ul>
///
/// returns:
/// <void>
- (void)onTime:(objc_SCClientEvent * _Nonnull)parameter;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
