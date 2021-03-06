/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCClient : NSObject <BRCForegroundClient, BRCNotificationPipeDelegate, BRCProcessMonitorDelegate> {
    NSCountedSet * _appLibraries;
    int  _clientPid;
    BRCClientPrivilegesDescriptor * _clientPriviledgesDescriptor;
    NSXPCConnection * _connection;
    BOOL  _dieOnInvalidate;
    unsigned int  _invalidated;
    unsigned int  _isForeground;
    BOOL  _isUsingUbiquity;
    BRCAccountSession * _session;
    brc_task_tracker * _tracker;
    struct { 
        unsigned int val[8]; 
    }  auditToken;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) BRCClientPrivilegesDescriptor *clientPriviledgesDescriptor;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultAppLibraryID;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL dieOnInvalidate;
@property (nonatomic, readonly) NSSet *entitledAppLibraryIDs;
@property (nonatomic, readonly) BOOL hasPrivateSharingInterfaceEntitlement;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) BOOL isUsingUbiquity;
@property (nonatomic, retain) BRCAccountSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(BOOL)arg3 reply:(id /* block */)arg4;
- (void)_auditURL:(id)arg1;
- (id)_auditedURLFromPath:(id)arg1;
- (BOOL)_canCreateAppLibraryWithID:(id)arg1 error:(id*)arg2;
- (id)_createBookmarkWithTarget:(id)arg1 targetPath:(id)arg2 parentPath:(id)arg3 aliasName:(id)arg4 error:(id*)arg5;
- (BOOL)_entitlementBooleanValueForKey:(id)arg1;
- (id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (BOOL)_hasAccessToAppLibraryID:(id)arg1 error:(id*)arg2;
- (BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id*)arg2;
- (BOOL)_isAppLibraryProxyEntitled;
- (BOOL)_isAppLibraryProxyWithError:(id*)arg1;
- (BOOL)_isAutomationEntitled;
- (void)_setupAppLibraryAndZoneWithID:(id)arg1 andSendReply:(id /* block */)arg2;
- (id)_setupPrivateAppLibrary:(id)arg1 error:(id*)arg2;
- (id)_sharingOperationDocumentFromLookup:(id)arg1 url:(id)arg2 error:(id*)arg3;
- (void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned int)arg2 options:(unsigned int)arg3 error:(id)arg4 reply:(id /* block */)arg5;
- (void)_startMonitoringProcessIfNeeded;
- (void)_startSharingOperationAfterAcceptation:(struct _BRCFrameworkOperation { Class x1; id x2; id x3; /* Warning: Unrecognized filer type: '1' using 'void*' */ void*x4; void*x5; unsigned char x6; void*x7; }*)arg1 client:(id)arg2 item:(id)arg3;
- (void)_stopMonitoringProcess;
- (void)accessLogicalOrPhysicalURL:(id)arg1 accessKind:(int)arg2 dbAccessKind:(int)arg3 asynchronously:(BOOL)arg4 handler:(id /* block */)arg5;
- (void)addAppLibrary:(id)arg1;
- (id)bundleID;
- (BOOL)canAccessLogicalOrPhysicalURL:(id)arg1 accessKind:(int)arg2;
- (BOOL)canAccessPath:(const char *)arg1 accessKind:(int)arg2;
- (BOOL)canAccessPhysicalURL:(id)arg1;
- (id)clientPriviledgesDescriptor;
- (BOOL)cloudEnabledStatus;
- (id)connection;
- (id)defaultAppLibraryID;
- (id)description;
- (BOOL)dieOnInvalidate;
- (void)dumpToContext:(id)arg1;
- (id)entitledAppLibraryIDs;
- (BOOL)hasPrivateSharingInterfaceEntitlement;
- (id)identifier;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (BOOL)isSandboxed;
- (BOOL)isUsingUbiquity;
- (id)issueContainerExtensionForURL:(id)arg1 error:(id*)arg2;
- (void)notificationPipe:(id)arg1 didObserveAppLibrary:(id)arg2;
- (void)notificationPipe:(id)arg1 willObserveAppLibrary:(id)arg2;
- (void)process:(int)arg1 didBecomeForeground:(BOOL)arg2;
- (void)removeAppLibrary:(id)arg1;
- (id)session;
- (void)setClientPriviledgesDescriptor:(id)arg1;
- (void)setIsUsingUbiquity:(BOOL)arg1;
- (void)setPrivilegesDescriptor:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setupNonSandboxedAccessForUbiquityContainers:(id)arg1 forBundleID:(id)arg2;
- (void)wait;

@end
