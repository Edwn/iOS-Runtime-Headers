/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSWPCitationRecord : TSPObject {
    NSString *_authorsString;
    NSString *_endNoteXML;
    NSString *_pageRange;
    NSString *_prefix;
    NSString *_suffix;
    NSString *_title;
    NSString *_type;
    NSString *_year;
    bool_hideAuthorNames;
    bool_hideYear;
    bool_recordXMLApplied;
    bool_shouldRemove;
}

@property(copy) NSString * authorsString;
@property(readonly) NSString * cacheKey;
@property(copy) NSString * endNoteXML;
@property bool hideAuthorNames;
@property bool hideYear;
@property(copy) NSString * pageRange;
@property(copy) NSString * prefix;
@property bool recordXMLApplied;
@property bool shouldRemove;
@property(copy) NSString * suffix;
@property(copy) NSString * title;
@property(copy) NSString * type;
@property(copy) NSString * year;

- (id)authorYearString;
- (id)authorsString;
- (id)cacheKey;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)endNoteXML;
- (bool)hideAuthorNames;
- (bool)hideYear;
- (id)initFromUnarchiver:(id)arg1;
- (bool)isRecordEqual:(id)arg1;
- (void)p_applyEndNoteXML;
- (void)p_copyPropertiesToObject:(id)arg1;
- (id)pageRange;
- (id)prefix;
- (bool)recordXMLApplied;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthorsString:(id)arg1;
- (void)setEndNoteXML:(id)arg1;
- (void)setHideAuthorNames:(bool)arg1;
- (void)setHideYear:(bool)arg1;
- (void)setPageRange:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setRecordXMLApplied:(bool)arg1;
- (void)setShouldRemove:(bool)arg1;
- (void)setSuffix:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setYear:(id)arg1;
- (bool)shouldRemove;
- (id)suffix;
- (id)title;
- (id)type;
- (id)year;

@end