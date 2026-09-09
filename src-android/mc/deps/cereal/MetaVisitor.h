#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

struct MetaVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mCtx;
    // NOLINTEND

public:
    // prevent constructor by default
    MetaVisitor();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MetaVisitor() = default;

    virtual void log(std::string) = 0;

    virtual bool hasErrors() const = 0;

    virtual void onSequenceContainer(ulong, std::function<bool ()>) = 0;

    virtual void onAssociativeContainer(ulong, std::function<bool ()>) = 0;

    virtual void onAssociativeContainer(std::string_view, std::function<bool ()>) = 0;

    virtual void onSetter(std::function<bool ()>) = 0;

    virtual void onMetaType(std::function<bool ()>, std::function<void ()>) = 0;

    virtual void onMetaData(std::string_view, uint, ::entt::meta_data, ::entt::meta_any, ::entt::meta_any, std::function<void (entt::meta_data, entt::meta_any&, entt::meta_data, entt::meta_any&)>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
