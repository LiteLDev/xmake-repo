#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class IJsonDefinitionSerializer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkff0ac1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    IJsonDefinitionSerializer& operator=(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IJsonDefinitionSerializer();
#else // @header-generator platform
    virtual ~IJsonDefinitionSerializer() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, ::SemVersion const&, bool const) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, ::SemVersion const&, bool const) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<IDefinitionInstance> _serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, bool, bool const) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::shared_ptr<::IDefinitionInstance>
    _serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, bool, bool const) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
