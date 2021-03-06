// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.1.1
// Generated from file `ServantLocator.ice'

#ifndef __Ice_ServantLocator_h__
#define __Ice_ServantLocator_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/ObjectAdapterF.h>
#include <Ice/Current.h>
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

class ServantLocator;
ICE_API bool operator==(const ServantLocator&, const ServantLocator&);
ICE_API bool operator!=(const ServantLocator&, const ServantLocator&);
ICE_API bool operator<(const ServantLocator&, const ServantLocator&);
ICE_API bool operator<=(const ServantLocator&, const ServantLocator&);
ICE_API bool operator>(const ServantLocator&, const ServantLocator&);
ICE_API bool operator>=(const ServantLocator&, const ServantLocator&);

}

namespace IceInternal
{

ICE_API void incRef(::Ice::ServantLocator*);
ICE_API void decRef(::Ice::ServantLocator*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::ServantLocator> ServantLocatorPtr;

}

namespace Ice
{

}

namespace Ice
{

class ICE_API ServantLocator : virtual public ::Ice::LocalObject
{
public:

    typedef ServantLocatorPtr PointerType;
    

    virtual ::Ice::ObjectPtr locate(const ::Ice::Current&, ::Ice::LocalObjectPtr&) = 0;

    virtual void finished(const ::Ice::Current&, const ::Ice::ObjectPtr&, const ::Ice::LocalObjectPtr&) = 0;

    virtual void deactivate(const ::std::string&) = 0;
};

}

#endif
