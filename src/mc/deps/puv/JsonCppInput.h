#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SemVersion;
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

namespace Puv {

class JsonCppInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mData;
    ::ll::UntypedStorage<8, 24> mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkec571a;
    ::ll::UntypedStorage<8, 24> mUnkb4e3a6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JsonCppInput& operator=(JsonCppInput const&);
    JsonCppInput(JsonCppInput const&);
#endif // @header-generator platform
    JsonCppInput();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JsonCppInput();
#else // @header-generator platform
    virtual ::SemVersion version() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SemVersion version() const;
#else // @header-generator platform
    virtual ::Puv::Input::Data data() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Input::Data data() const;
#else // @header-generator platform
    virtual ~JsonCppInput() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit JsonCppInput(::Json::Value);

    MCNAPI JsonCppInput(::Json::Value, ::SemVersion);
#else // @header-generator platform
    MCNAPI JsonCppInput(::Json::Value json, ::SemVersion version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Json::Value);

    MCNAPI void* $ctor(::Json::Value, ::SemVersion);
#else // @header-generator platform
    MCNAPI void* $ctor(::Json::Value json, ::SemVersion version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SemVersion $version() const;

    MCNAPI ::Puv::Input::Data $data() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
