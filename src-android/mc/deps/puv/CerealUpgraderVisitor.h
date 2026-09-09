#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/MetaVisitor.h"
#include "mc/deps/puv/UpgradeState.h"

namespace Puv::internal {

class CerealUpgraderVisitor : public ::cereal::MetaVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::Puv::internal::UpgradeState> mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CerealUpgraderVisitor();

    virtual void log(std::string);

    virtual bool hasErrors() const;

    virtual void onSequenceContainer(ulong, std::function<bool ()>);

    virtual void onAssociativeContainer(ulong, std::function<bool ()>);

    virtual void onAssociativeContainer(std::string_view, std::function<bool ()>);

    virtual void onSetter(std::function<bool ()>);

    virtual void onMetaType(std::function<bool ()>, std::function<void ()>);

    virtual void onMetaData(std::string_view, uint, ::entt::meta_data, ::entt::meta_any, ::entt::meta_any, std::function<void (entt::meta_data, entt::meta_any&, entt::meta_data, entt::meta_any&)>);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $log(std::string);

    MCNAPI bool $hasErrors() const;

    MCNAPI void $onSequenceContainer(ulong, std::function<bool()>);

    MCNAPI void $onAssociativeContainer(ulong, std::function<bool()>);

    MCNAPI void $onAssociativeContainer(std::string_view, std::function<bool()>);

    MCNAPI void $onSetter(std::function<bool()>);

    MCNAPI void $onMetaType(std::function<bool()>, std::function<void()>);

    MCNAPI void $onMetaData(
        std::string_view,
        uint,
        ::entt::meta_data,
        ::entt::meta_any,
        ::entt::meta_any,
        std::function<void(entt::meta_data, entt::meta_any&, entt::meta_data, entt::meta_any&)>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv::internal
