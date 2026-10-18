#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Document.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

class BootstrapConfig {
public:
    // BootstrapConfig inner types declare
    // clang-format off
    struct LoadResult;
    // clang-format on

    // BootstrapConfig inner types define
    struct LoadResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>        success;
        ::ll::TypedStorage<8, 8, char const*> errorMessage;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnkdc4dae;
        ::ll::UntypedStorage<8, 8> mUnka8141d;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LoadResult& operator=(LoadResult const&);
        LoadResult(LoadResult const&);
        LoadResult();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 4096, char[4096]>                      mBuffer;
    ::ll::TypedStorage<1, 512, char[512]>                        mError;
    ::ll::TypedStorage<8, 88, ::Bedrock::JSONObject::Document>   mDocument;
    ::ll::TypedStorage<8, 8, ::Bedrock::JSONObject::ObjectNode*> mRootObject;
    ::ll::TypedStorage<1, 1, bool>                               mInitialized;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 4096> mUnk72204f;
    ::ll::UntypedStorage<1, 512>  mUnk801276;
    ::ll::UntypedStorage<8, 88>   mUnk981535;
    ::ll::UntypedStorage<8, 8>    mUnkbc915e;
    ::ll::UntypedStorage<1, 1>    mUnk48c072;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BootstrapConfig& operator=(BootstrapConfig const&);
    BootstrapConfig(BootstrapConfig const&);
    BootstrapConfig();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::BootstrapConfig::LoadResult _makeBootstrapError(char const*);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::BootstrapConfig::LoadResult _makeBootstrapError(char const* fmt, ...);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode const* getRoot() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::BootstrapConfig::LoadResult _makeBootstrapError(char const* fmt, ...);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~BootstrapConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::BootstrapConfig& getSharedInstance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::BootstrapConfig::LoadResult initialize(char const* fileName);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
