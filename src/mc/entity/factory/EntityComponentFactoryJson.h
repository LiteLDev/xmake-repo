#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DefinitionInstanceGroup;
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class IJsonDefinitionSerializer;
#if defined(LL_PLAT_A) // @header-generator platform
class MinEngineVersion;
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class EntityComponentFactoryJson : public ::EntityComponentFactoryBase {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // EntityComponentFactoryJson inner types define
    using iterator = std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>, void*>*>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>> mDefinitionSerializers;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk1114c2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityComponentFactoryJson& operator=(EntityComponentFactoryJson const&);
    EntityComponentFactoryJson(EntityComponentFactoryJson const&);
    EntityComponentFactoryJson();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EntityComponentFactoryJson();
#else // @header-generator platform
    virtual ~EntityComponentFactoryJson() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const&) const;
#else // @header-generator platform
    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
