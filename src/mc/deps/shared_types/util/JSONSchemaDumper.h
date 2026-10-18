#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/DescriptionConfig.h"
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
struct JSONSchemaProperty;
namespace Core { class PathView; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

class JSONSchemaDumper {
public:
    // JSONSchemaDumper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using DumpCallback = std::function<void(const Core::PathView&, std::string_view)>;
#else // @header-generator platform
    using DumpCallback = ::std::function<void(::Core::PathView const&, ::std::string_view)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const cereal::ReflectionCtx*>> mCerealContext;
    ::ll::UntypedStorage<1, 24>                                             mBaseFolder;
    ::ll::TypedStorage<4, 16, ::cereal::DescriptionConfig>                  mDescriptionConfig;
    ::ll::TypedStorage<8, 24, std::string>                                  mMinecraftVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::ReflectionCtx const*>> mCerealContext;
    ::ll::TypedStorage<8, 32, ::Core::Path>                                   mBaseFolder;
    ::ll::TypedStorage<4, 16, ::cereal::DescriptionConfig>                    mDescriptionConfig;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mMinecraftVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    JSONSchemaDumper();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void dump(::std::function<void(::Core::PathView const&, ::std::string_view)> func);

    MCAPI ::SharedTypes::JSONSchemaDumper& minecraftVersion(::std::string version);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::Core::Path
    buildSchemaOutputPath(::Core::PathView const baseFolder, ::JSONSchemaProperty const& property);
#endif
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes
