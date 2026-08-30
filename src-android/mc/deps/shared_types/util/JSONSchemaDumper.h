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
    using DumpCallback = std::function<void(const Core::PathView&, std::string_view)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const cereal::ReflectionCtx*>> mCerealContext;
    ::ll::UntypedStorage<1, 24>                                             mBaseFolder;
    ::ll::TypedStorage<4, 16, ::cereal::DescriptionConfig>                  mDescriptionConfig;
    ::ll::TypedStorage<8, 24, std::string>                                  mMinecraftVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaDumper();
};

} // namespace SharedTypes
