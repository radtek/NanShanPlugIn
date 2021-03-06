// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.1.1
// Generated from file `Logger.ice'

#ifndef __Ice_Logger_h__
#define __Ice_Logger_h__

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

class Logger;
ICE_API bool operator==(const Logger&, const Logger&);
ICE_API bool operator!=(const Logger&, const Logger&);
ICE_API bool operator<(const Logger&, const Logger&);
ICE_API bool operator<=(const Logger&, const Logger&);
ICE_API bool operator>(const Logger&, const Logger&);
ICE_API bool operator>=(const Logger&, const Logger&);

}

namespace IceInternal
{

ICE_API void incRef(::Ice::Logger*);
ICE_API void decRef(::Ice::Logger*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::Logger> LoggerPtr;

}

namespace Ice
{

}

namespace Ice
{

class ICE_API Logger : virtual public ::Ice::LocalObject
{
public:

    typedef LoggerPtr PointerType;
    

    virtual void print(const ::std::string&) = 0;

    virtual void trace(const ::std::string&, const ::std::string&) = 0;

    virtual void warning(const ::std::string&) = 0;

    virtual void error(const ::std::string&) = 0;
};

}

#endif
