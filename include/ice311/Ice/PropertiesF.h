// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.1.1
// Generated from file `PropertiesF.ice'

#ifndef __Ice_PropertiesF_h__
#define __Ice_PropertiesF_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 301
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Ice
{

class Properties;
ICE_API bool operator==(const Properties&, const Properties&);
ICE_API bool operator!=(const Properties&, const Properties&);
ICE_API bool operator<(const Properties&, const Properties&);
ICE_API bool operator<=(const Properties&, const Properties&);
ICE_API bool operator>(const Properties&, const Properties&);
ICE_API bool operator>=(const Properties&, const Properties&);

}

namespace IceInternal
{

ICE_API void incRef(::Ice::Properties*);
ICE_API void decRef(::Ice::Properties*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::Properties> PropertiesPtr;

}

namespace Ice
{

}

#endif
