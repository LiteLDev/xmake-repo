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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mCtx;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx const>> mCtx;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MetaVisitor();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MetaVisitor() = default;
#else // @header-generator platform
    virtual ~MetaVisitor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void log(std::string) = 0;
#else // @header-generator platform
    virtual void log(::std::string msg) = 0;
#endif // @header-generator platform

    virtual bool hasErrors() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSequenceContainer(ulong, std::function<bool ()>) = 0;
#else // @header-generator platform
    virtual void onSequenceContainer(uint64 index, ::std::function<bool()> cb) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAssociativeContainer(ulong, std::function<bool ()>) = 0;
#else // @header-generator platform
    virtual void onAssociativeContainer(::std::string_view key, ::std::function<bool()> cb) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onAssociativeContainer(std::string_view, std::function<bool ()>) = 0;
#else // @header-generator platform
    virtual void onAssociativeContainer(uint64 index, ::std::function<bool()> cb) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onSetter(std::function<bool ()>) = 0;
#else // @header-generator platform
    virtual void onSetter(::std::function<bool()> cb) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMetaType(std::function<bool ()>, std::function<void ()>) = 0;
#else // @header-generator platform
    virtual void onMetaType(::std::function<bool()> setters, ::std::function<void()> members) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onMetaData(std::string_view, uint, ::entt::meta_data, ::entt::meta_any, ::entt::meta_any, std::function<void (entt::meta_data, entt::meta_any&, entt::meta_data, entt::meta_any&)>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void onMetaData(
        ::std::string_view                                                                                key,
        uint                                                                                              id,
        ::entt::meta_data                                                                                 data,
        ::entt::meta_any                                                                                  from,
        ::entt::meta_any                                                                                  to,
        ::std::function<void(::entt::meta_data, ::entt::meta_any&, ::entt::meta_data, ::entt::meta_any&)> cb
    ) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
