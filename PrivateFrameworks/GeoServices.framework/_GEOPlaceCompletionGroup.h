/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSuggestionEntryList, NSArray, NSString;

@interface _GEOPlaceCompletionGroup : NSObject <GEOCompletionGroup> {
    GEOSuggestionEntryList *_entryList;
    NSArray *_items;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray * items;
@property(readonly) NSString * localizedSectionHeader;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initWithCompletion:(id)arg1 query:(id)arg2 traits:(id)arg3;
- (id)initWithSuggestionEntryList:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 completion:(id)arg4 traits:(id)arg5;
- (id)items;
- (id)localizedSectionHeader;

@end