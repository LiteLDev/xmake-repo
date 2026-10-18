#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class SessionInfoManagerImpl; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { template<typename T0, typename T1, typename T2, typename T3> class AccessUpdateEditor; }
namespace Bedrock::Detail { template<typename T0, typename T1> class AccessUpdateEditorAccessor; }
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class SessionInfoManager : public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                           public ::Bedrock::ImplBase<Bedrock::SessionInfoManager> {
public:
    // SessionInfoManager inner types define
    using Editor = ::Bedrock::AccessUpdateEditor<
        std::shared_ptr<Bedrock::SessionInfo>,
        Bedrock::SessionInfoManagerImpl,
        Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>,
        std::mutex>;

#else // @header-generator platform
                           public ::Bedrock::ImplBase<::Bedrock::SessionInfoManager> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SessionInfoManager() = default;

#else // @header-generator platform
#endif // @header-generator platform
    virtual void initialize() = 0;

    virtual void beginNewSession() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<const Bedrock::SessionInfo> getCurrentSession() const = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::SessionInfo const> getCurrentSession() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::AccessUpdateEditor<std::shared_ptr<Bedrock::SessionInfo>, Bedrock::SessionInfoManagerImpl, Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>, std::mutex> editCurrentSession() = 0;
#else // @header-generator platform
    virtual ::Bedrock::AccessUpdateEditor<
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
    editCurrentSession() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&, const std::shared_ptr<const Bedrock::SessionInfo>&)>& onCurrentSessionChanged() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(
        ::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&,
        ::std::shared_ptr<::Bedrock::SessionInfo const> const&
    )>&
    onCurrentSessionChanged() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string serializeSession(::Bedrock::SessionInfo const&) const = 0;
#else // @header-generator platform
    virtual ::std::string serializeSession(::Bedrock::SessionInfo const& session) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Bedrock::SessionInfo> deserializeSession(std::string_view) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::SessionInfo> deserializeSession(::std::string_view contents) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
