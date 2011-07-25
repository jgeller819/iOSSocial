//
//  TwitterConstants.h
//  iOSSocial
//
//  Created by Christopher White on 7/22/11.
//  Copyright 2011 Mad Races, Inc. All rights reserved.
//

#ifndef iOSSocial_TwitterConstants_h
#define iOSSocial_TwitterConstants_h

// OAuth Params Dictionary Keys
static NSString *const kSMTwitterClientID         = @"clientID";
static NSString *const kSMTwitterClientSecret     = @"clientSecret";
// This has to match the callback URL you setup on the instagram site for your app
// or you will get an OAuth error!
// You can make up an arbitrary redirectURI.  The controller will watch for
// the server to redirect the web view to this URI, but this URI will not be
// loaded, so it need not be for any actual web page.
static NSString *const kSMTwitterRedirectURI      = @"redirectURI";
// Make this a unique name. Incorporate the name of your app.
// Note: this should perhaps be internalized.
static NSString *const kSMTwitterKeychainItemName = @"keychainItemName";

#endif
