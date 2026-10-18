#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/MetaVisitor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/UpgradeState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Puv::internal {

class CerealUpgraderVisitor : public ::cereal::MetaVisitor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 224, ::Puv::internal::UpgradeState> mState;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 240> mUnkaade51;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CerealUpgraderVisitor& operator=(CerealUpgraderVisitor const&);
    CerealUpgraderVisitor(CerealUpgraderVisitor const&);
    CerealUpgraderVisitor();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CerealUpgraderVisitor();
#else // @header-generator platform
    virtual void log(::std::string msg) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(std::string);
#else // @header-generator platform
    virtual bool hasErrors() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasErrors() const;
#else // @header-generator platform
    virtual void onSequenceContainer(uint64 index, ::std::function<bool()> cb) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSequenceContainer(ulong, std::function<bool ()>);
#else // @header-generator platform
    virtual void onAssociativeContainer(::std::string_view key, ::std::function<bool()> cb) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAssociativeContainer(ulong, std::function<bool ()>);
#else // @header-generator platform
    virtual void onAssociativeContainer(uint64 index, ::std::function<bool()> cb) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAssociativeContainer(std::string_view, std::function<bool ()>);
#else // @header-generator platform
    virtual void onSetter(::std::function<bool()> cb) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSetter(std::function<bool ()>);
#else // @header-generator platform
    virtual void onMetaType(::std::function<bool()> setters, ::std::function<void()> members) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMetaType(std::function<bool ()>, std::function<void ()>);
#else // @header-generator platform
    virtual void onMetaData(
        ::std::string_view                                                                                key,
        uint                                                                                              id,
        ::entt::meta_data                                                                                 data,
        ::entt::meta_any                                                                                  from,
        ::entt::meta_any                                                                                  to,
        ::std::function<void(::entt::meta_data, ::entt::meta_any&, ::entt::meta_data, ::entt::meta_any&)> cb
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMetaData(std::string_view, uint, ::entt::meta_data, ::entt::meta_any, ::entt::meta_any, std::function<void (entt::meta_data, entt::meta_any&, entt::meta_data, entt::meta_any&)>);
    // clang-format on
#else // @header-generator platform
    virtual ~CerealUpgraderVisitor() /*override*/;
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $log(std::string);
#else // @header-generator platform
    MCNAPI void $log(::std::string msg);
#endif // @header-generator platform

    MCNAPI bool $hasErrors() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSequenceContainer(ulong, std::function<bool()>);
#else // @header-generator platform
    MCNAPI void $onSequenceContainer(uint64 index, ::std::function<bool()> cb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAssociativeContainer(ulong, std::function<bool()>);
#else // @header-generator platform
    MCNAPI void $onAssociativeContainer(::std::string_view key, ::std::function<bool()> cb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onAssociativeContainer(std::string_view, std::function<bool()>);
#else // @header-generator platform
    MCNAPI void $onAssociativeContainer(uint64 index, ::std::function<bool()> cb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onSetter(std::function<bool()>);
#else // @header-generator platform
    MCNAPI void $onSetter(::std::function<bool()> cb);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onMetaType(std::function<bool()>, std::function<void()>);
#else // @header-generator platform
    MCNAPI void $onMetaType(::std::function<bool()> setters, ::std::function<void()> members);
#endif // @header-generator platform

    MCNAPI void $onMetaData(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string_view,
        uint,
        ::entt::meta_data,
        ::entt::meta_any,
        ::entt::meta_any,
        std::function<void(entt::meta_data, entt::meta_any&, entt::meta_data, entt::meta_any&)>
#else // @header-generator platform
        ::std::string_view                                                                                key,
        uint                                                                                              id,
        ::entt::meta_data                                                                                 data,
        ::entt::meta_any                                                                                  from,
        ::entt::meta_any                                                                                  to,
        ::std::function<void(::entt::meta_data, ::entt::meta_any&, ::entt::meta_data, ::entt::meta_any&)> cb
#endif // @header-generator platform
    );
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

} // namespace Puv::internal
