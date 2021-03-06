/*
	File:       QTMetadataItem.h

	Copyright:  (c) 2010 by Apple Inc., all rights reserved.

*/

#import <Cocoa/Cocoa.h>
#import "QTKit.h"

// metadata formats
QTKIT_EXTERN NSString * const QTMetadataFormatQuickTimeUserData								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataFormatQuickTimeMetadata								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataFormatiTunesMetadata								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataFormatID3Metadata									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

// metadata key spaces
QTKIT_EXTERN NSString * const QTMetadataKeySpaceCommon										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataKeySpaceQuickTimeUserData							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataKeySpaceQuickTimeMetadata							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataKeySpaceiTunes										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataKeySpaceID3											AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

// metadata keys for QTMetadataKeySpaceCommon
QTKIT_EXTERN NSString * const QTMetadataCommonKeyTitle										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyCreator									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeySubject									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyDescription								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyPublisher									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyContributor								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyCreationDate								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyLastModifiedDate							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyType										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyFormat										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyIdentifier									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeySource										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyLanguage									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyRelation									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyLocation									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyCopyrights									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyAlbumName									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyAuthor										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyArtist										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyArtwork									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyMake										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyModel										AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeySoftware									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataCommonKeyComment									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

// metadata keys for QTMetadataKeySpaceQuickTimeUserData
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyAlbum							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyArranger						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyArtist							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyAuthor							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyChapter							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyComment							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyComposer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyCopyright						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyCreationDate					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyDescription						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyDirector						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyDisclaimer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyEncodedBy						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyFullName						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyGenre							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyHostComputer					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyInformation						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyKeywords						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyMake							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyModel							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyOriginalArtist					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyOriginalFormat					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyOriginalSource					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyPerformers						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyProducer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyPublisher						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyProduct							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeySoftware						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeySpecialPlaybackRequirements		AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyTrack							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyWarning							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyWriter							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyURLLink							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyLocationISO6709					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyTrackName						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyCredits							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeUserDataKeyPhonogramRights					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

QTKIT_EXTERN NSString * const QTMetadataISOUserDataKeyCopyright								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyCopyright								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyAuthor								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyPerformer								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyGenre									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyRecordingYear							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyLocation								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyTitle									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadata3GPUserDataKeyDescription							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

// metadata keys for QTMetadataKeySpaceQuickTimeMetadata
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyAuthor							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyComment							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyCopyright						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyCreationDate					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyDirector						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyDisplayName						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyInformation						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyKeywords						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyProducer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyPublisher						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyAlbum							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyArtist							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyArtwork							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyDescription						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeySoftware						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyYear							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyGenre							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyiXML							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyLocationISO6709					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyMake							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyModel							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyArranger						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyEncodedBy						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyOriginalArtist					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyPerformer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyComposer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyCredits							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataQuickTimeMetadataKeyPhonogramRights					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

// metadata keys for QTMetadataKeySpaceiTunes
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyAlbum								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyArtist								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyUserComment						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyCoverArt							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyCopyright							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyReleaseDate						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyEncodedBy							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyPredefinedGenre					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyUserGenre							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeySongName							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyTrackSubTitle						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyEncodingTool						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyComposer							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyAlbumArtist						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyAccountKind						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyAppleID							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyArtistID							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeySongID								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyDiscCompilation					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyDiscNumber							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyGenreID							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyGrouping							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyPlaylistID							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyContentRating						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyBeatsPerMin						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyTrackNumber						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyArtDirector						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyArranger							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyAuthor								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyLyrics								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyAcknowledgement					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyConductor							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyDescription						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyDirector							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyEQ									AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyLinerNotes							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyRecordCompany						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyOriginalArtist						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyPhonogramRights					AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyProducer							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyPerformer							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyPublisher							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeySoundEngineer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeySoloist							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyCredits							AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyThanks								AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyOnlineExtras						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;
QTKIT_EXTERN NSString * const QTMetadataiTunesMetadataKeyExecProducer						AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;

// metadata keys for QTMetadataKeySpaceID3
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyAudioEncryption                       AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* AENC Audio encryption */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyAttachedPicture                       AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* APIC Attached picture */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyAudioSeekPointIndex                   AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* ASPI Audio seek point index */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyComments                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* COMM Comments */        
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyCommerical                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* COMR Commercial frame */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEncryption                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* ENCR Encryption method registration */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEqualization                          AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* EQUA Equalization */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEqualization2                         AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* EQU2 Equalization (2) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEventTimingCodes                      AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* ETCO Event timing codes */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyGeneralEncapsulatedObject             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* GEOB General encapsulated object */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyGroupIdentifier                       AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* GRID Group identification registration */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyInvolvedPeopleList_v23                AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* IPLS Involved people list */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyLink                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* LINK Linked information */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyMusicCDIdentifier                     AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* MCDI Music CD identifier */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyMPEGLocationLookupTable               AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* MLLT MPEG location lookup table */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOwnership                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* OWNE Ownership frame */ 
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPrivate                               AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* PRIV Private frame */   
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPlayCounter                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* PCNT Play counter */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPopularimeter                         AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* POPM Popularimeter */   
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPositionSynchronization               AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* POSS Position synchronisation frame */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyRecommendedBufferSize                 AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* RBUF Recommended buffer size */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyRelativeVolumeAdjustment              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* RVAD Relative volume adjustment */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyRelativeVolumeAdjustment2             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* RVA2 Relative volume adjustment (2) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyReverb                                AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* RVRB Reverb */          
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySeek                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* SEEK Seek frame */      
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySignature                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* SIGN Signature frame */ 
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySynchronizedLyric                     AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* SYLT Synchronized lyric/text */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySynchronizedTempoCodes                AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* SYTC Synchronized tempo codes */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyAlbumTitle                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TALB Album/Movie/Show title */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyBeatsPerMinute                        AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TBPM BPM (beats per minute) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyComposer                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TCOM Composer */        
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyContentType                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TCON Content type */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyCopyright                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TCOP Copyright message */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyDate                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDAT Date */            
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEncodingTime                          AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDEN Encoding time */   
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPlaylistDelay                         AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDLY Playlist delay */  
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOriginalReleaseTime                   AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDOR Original release time */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyRecordingTime                         AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDRC Recording time */  
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyReleaseTime                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDRL Release time */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyTaggingTime                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TDTG Tagging time */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEncodedBy                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TENC Encoded by */      
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyLyricist                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TEXT Lyricist/Text writer */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyFileType                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TFLT File type */       
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyTime                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TIME Time */            
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyInvolvedPeopleList_v24                AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TIPL Involved people list */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyContentGroupDescription               AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TIT1 Content group description */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyTitleDescription                      AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TIT2 Title/songname/content description */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySubTitle                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TIT3 Subtitle/Description refinement */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyInitialKey                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TKEY Initial key */     
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyLanguage                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TLAN Language(s) */     
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyLength                                AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TLEN Length */          
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyMusicianCreditsList                   AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TMCL Musician credits list */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyMediaType                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TMED Media type */      
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyMood                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TMOO Mood */            
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOriginalAlbumTitle                    AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TOAL Original album/movie/show title */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOriginalFilename                      AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TOFN Original filename */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOriginalLyricist                      AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TOLY Original lyricist(s)/text writer(s) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOriginalArtist                        AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TOPE Original artist(s)/performer(s) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOriginalReleaseYear                   AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TORY Original release year */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyFileOwner                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TOWN File owner/licensee */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyLeadPerformer                         AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPE1 Lead performer(s)/Soloist(s) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyBand                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPE2 Band/orchestra/accompaniment */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyConductor                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPE3 Conductor/performer refinement */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyModifiedBy                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPE4 Interpreted, remixed, or otherwise modified by */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPartOfASet                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPOS Part of a set */   
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyProducedNotice                        AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPRO Produced notice */ 
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPublisher                             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TPUB Publisher */       
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyTrackNumber                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TRCK Track number/Position in set */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyRecordingDates                        AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TRDA Recording dates */ 
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyInternetRadioStationName              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TRSN Internet radio station name */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyInternetRadioStationOwner             AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TRSO Internet radio station owner */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySize                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSIZ Size */            
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyAlbumSortOrder                        AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSOA Album sort order */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPerformerSortOrder                    AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSOP Performer sort order */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyTitleSortOrder                        AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSOT Title sort order */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyInternationalStandardRecordingCode    AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSRC ISRC (international standard recording code) */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyEncodedWith                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSSE Software/Hardware and settings used for encoding */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeySetSubtitle                           AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TSST Set subtitle */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyYear                                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TYER Year */            
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyUserText                              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* TXXX User defined text information frame */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyUniqueFileIdentifier                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* UFID Unique file identifier */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyTermsOfUse                            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* USER Terms of use */    
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyUnsynchronizedLyric                   AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* USLT Unsynchronized lyric/text transcription */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyCommercialInformation                 AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WCOM Commercial information */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyCopyrightInformation                  AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WCOP Copyright/Legal information */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOfficialAudioFileWebpage              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WOAF Official audio file webpage */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOfficialArtistWebpage                 AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WOAR Official artist/performer webpage */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOfficialAudioSourceWebpage            AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WOAS Official audio source webpage */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOfficialInternetRadioStationHomepage	AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WORS Official Internet radio station homepage */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyPayment                               AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WPAY Payment */         
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyOfficialPublisherWebpage              AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WPUB Publisher's official webpage */
QTKIT_EXTERN NSString * const QTMetadataID3MetadataKeyUserURL                               AVAILABLE_MAC_OS_X_VERSION_10_7_AND_LATER;			/* WXXX User defined URL link frame */

#if (defined(MAC_OS_X_VERSION_10_7) && (MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7))
/*!
    @class			QTMetadataItem
    @abstract		QTMetadataItem represents an item of metadata associated with a QTMovie or QTTrack object.
    
	@discussion		QTMetadataItem objects have keys that accord with the specification of the container format from which they're drawn.
	
					You can filter arrays of QTMetadataItem objects by locale or by key and keyspace via the category
					QTMetadataItem_ArrayFiltering defined below.
*/

@class QTMetadataItemInternal;

@interface QTMetadataItem : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
	QTMetadataItemInternal	*_priv;
}

/* indicates the key of the metadata item */
@property (readonly, copy) id<NSCopying> key;

/* indicates the keyspace of the metadata item's key; this will typically be the default keyspace for the metadata container in which the metadata item is stored */
@property (readonly, copy) NSString *keySpace;

/* indicates the locale of the metadata item; may be nil if no locale information is available for the metadata item */
@property (readonly, copy) NSLocale *locale;

/* indicates the timestamp of the metadata item. */
@property (readonly) QTTime time;

/* provides the value of the metadata item */
@property (readonly, copy) id<NSCopying> value;

/* provides a dictionary of the additional attributes */
@property (readonly, copy) NSDictionary *extraAttributes;

@end


@interface QTMetadataItem (QTMetadataItem_TypeCoercion)

/* provides the value of the metadata item as a string; will be nil if the value cannot be represented as a string */
@property (readonly) NSString *stringValue;

/* provides the value of the metadata item as an NSNumber. If the metadata item's value can't be coerced to a number, @"numberValue" will be nil. */
@property (readonly) NSNumber *numberValue;

/* provides the value of the metadata item as an NSDate. If the metadata item's value can't be coerced to a date, @"dateValue" will be nil. */
@property (readonly) NSDate *dateValue;

/* provides the raw bytes of the value of the metadata item */
@property (readonly) NSData *dataValue;

@end


@interface QTMetadataItem (QTMetadataItem_ArrayFiltering)

/*!
	@method			metadataItemsFromArray:withLocale:
	@abstract		Filters an array of QTMetadataItem objects according to locale.
	@param			array
					An array of QTMetadataItem objects to be filtered by locale.
	@param			locale
					The NSLocale that must be matched for a metadata item to be copied to the output array.
	@result			An NSArray object containing the metadata items of the specified NSArray that match the specified locale.
*/
+ (NSArray *)metadataItemsFromArray:(NSArray *)array withLocale:(NSLocale *)locale;

/*!
	@method			metadataItemsFromArray:withKey:keySpace:
	@abstract		Filters an array of QTMetadataItem objects according to key and/or keySpace.
	@param			array
					An array of QTMetadataItem objects to be filtered by key and/or keySpace.
	@param			key
					The key that must be matched for a metadata item to be copied to the output array.
					The keys will be compared to the keys of the QTMetadataItem objects in the array via [key isEqual:].
					If no filtering according to key is desired, pass nil. 
	@param			keySpace
					The keySpace that must be matched for a metadata item to be copied to the output array.
					The keySpace will be compared to the keySpaces of the QTMetadataItems in the array via [keySpace isEqualToString:].
					If no filtering according to keySpace is desired, pass nil. 
	@result			An NSArray object containing the metadata items of the specified NSArray that match the specified key and/or keySpace.
*/
+ (NSArray *)metadataItemsFromArray:(NSArray *)array withKey:(id)key keySpace:(NSString *)keySpace;

@end

#endif	// if (defined(MAC_OS_X_VERSION_10_7) && (MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7))
