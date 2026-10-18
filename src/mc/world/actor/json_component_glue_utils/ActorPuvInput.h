#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace JsonComponentGlueUtils {

class ActorPuvInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mJsonValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Json::Value> mJsonValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorPuvInput();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorPuvInput();
#else // @header-generator platform
    virtual ::SemVersion version() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SemVersion version() const;

    virtual ::Puv::Input::Data data() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Puv::Input::Data data() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SemVersion $version() const;
#else // @header-generator platform
    MCFOLD ::SemVersion $version() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::Input::Data $data() const;
#else // @header-generator platform
    MCFOLD ::Puv::Input::Data $data() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonComponentGlueUtils
