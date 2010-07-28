//
//  GBProtocolData.h
//  appledoc
//
//  Created by Tomaz Kragelj on 26.7.10.
//  Copyright (C) 2010, Gentle Bytes. All rights reserved.
//

#import "GBModelBase.h"

@class GBAdoptedProtocolsProvider;

/** Describes a protocol. */
@interface GBProtocolData : GBModelBase {
	@private
	NSString *_protocolName;
	GBAdoptedProtocolsProvider *_adoptedProtocols;
}

///---------------------------------------------------------------------------------------
/// @name Initialization & disposal
///---------------------------------------------------------------------------------------

/** Returns autoreleased instance of the protocol data with the given name.
 
 @param name The name of the protocol.
 @return Returns initialized object.
 @exception NSException Thrown if the given name is `nil` or empty.
 */
+ (id)protocolDataWithName:(NSString *)name;

/** Initializes the protocol with he given name.
 
 This is the designated initializer.
 
 @param name The name of the protocol.
 @return Returns initialized object.
 @exception NSException Thrown if the given name is `nil` or empty.
 */
- (id)initWithName:(NSString *)name;

///---------------------------------------------------------------------------------------
/// @name Protocol data
///---------------------------------------------------------------------------------------

/** The name of the protocol. */
@property (readonly) NSString *nameOfProtocol;

/** Protocol's adopted protocols, available via `GBAdoptedProtocolsProvider`. */
@property (readonly) GBAdoptedProtocolsProvider *adoptedProtocols;

@end
