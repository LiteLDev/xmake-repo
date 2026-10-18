#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/session/SessionInfoManager.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/cereal/ReflectionCtx.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { template<typename T0, typename T1, typename T2, typename T3> class AccessUpdateEditor; }
namespace Bedrock::Detail { template<typename T0, typename T1> class AccessUpdateEditorAccessor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class SessionInfoManagerImpl : public ::Bedrock::SessionInfoManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SessionInfoManagerImpl inner types define
    using SessionPublisher = ::Bedrock::PubSub::Publisher<
        void(
            const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&,
            const std::shared_ptr<const Bedrock::SessionInfo>&
        ),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::SessionInfo>> mCurrentSession;
    ::ll::UntypedStorage<8, 88>                                      mCurrentSessionPublisher;
    ::ll::TypedStorage<4, 40, std::mutex>                            mEditMutex;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mUpdateSubscription;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx>              mCerealCtx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>  mUnk76644a;
    ::ll::UntypedStorage<8, 128> mUnk35cbdc;
    ::ll::UntypedStorage<8, 80>  mUnkab0304;
    ::ll::UntypedStorage<8, 16>  mUnkc9cc48;
    ::ll::UntypedStorage<8, 128> mUnk1c9ab3;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SessionInfoManagerImpl& operator=(SessionInfoManagerImpl const&);
    SessionInfoManagerImpl(SessionInfoManagerImpl const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SessionInfoManagerImpl& operator=(SessionInfoManagerImpl const&);
    SessionInfoManagerImpl(SessionInfoManagerImpl const&);
    SessionInfoManagerImpl();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SessionInfoManagerImpl();
#else // @header-generator platform
    virtual void initialize() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize();
#else // @header-generator platform
    virtual void beginNewSession() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void beginNewSession();
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::SessionInfo const> getCurrentSession() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<const Bedrock::SessionInfo> getCurrentSession() const;
#else // @header-generator platform
    virtual ::Bedrock::AccessUpdateEditor<
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
    editCurrentSession() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::AccessUpdateEditor<std::shared_ptr<Bedrock::SessionInfo>, Bedrock::SessionInfoManagerImpl, Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>, std::mutex> editCurrentSession();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(
        ::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&,
        ::std::shared_ptr<::Bedrock::SessionInfo const> const&
    )>&
    onCurrentSessionChanged() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&, const std::shared_ptr<const Bedrock::SessionInfo>&)>& onCurrentSessionChanged();
#else // @header-generator platform
    virtual ::std::string serializeSession(::Bedrock::SessionInfo const& session) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string serializeSession(::Bedrock::SessionInfo const&) const;

    virtual std::shared_ptr<Bedrock::SessionInfo> deserializeSession(std::string_view) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::SessionInfo> deserializeSession(::std::string_view contents) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI SessionInfoManagerImpl();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $beginNewSession();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<const Bedrock::SessionInfo> $getCurrentSession() const;
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Bedrock::SessionInfo const> $getCurrentSession() const;
#endif // @header-generator platform

    MCNAPI ::Bedrock::AccessUpdateEditor<
#if defined(LL_PLAT_A) // @header-generator platform
        std::shared_ptr<Bedrock::SessionInfo>,
        Bedrock::SessionInfoManagerImpl,
        Bedrock::Detail::AccessUpdateEditorAccessor<std::shared_ptr<Bedrock::SessionInfo>, void>,
        std::mutex>
#else // @header-generator platform
        ::std::shared_ptr<::Bedrock::SessionInfo>,
        ::Bedrock::SessionInfoManagerImpl,
        ::Bedrock::Detail::AccessUpdateEditorAccessor<::std::shared_ptr<::Bedrock::SessionInfo>, void>,
        ::Bedrock::Threading::Mutex>
#endif // @header-generator platform
    $editCurrentSession();

    MCNAPI ::Bedrock::PubSub::Connector<void(
#if defined(LL_PLAT_A) // @header-generator platform
        const Bedrock::NonOwnerPointer<Bedrock::SessionInfoManager>&,
        const std::shared_ptr<const Bedrock::SessionInfo>&
#else // @header-generator platform
        ::Bedrock::NonOwnerPointer<::Bedrock::SessionInfoManager> const&,
        ::std::shared_ptr<::Bedrock::SessionInfo const> const&
#endif // @header-generator platform
    )>&
    $onCurrentSessionChanged();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $serializeSession(::Bedrock::SessionInfo const&) const;
#else // @header-generator platform
    MCNAPI ::std::string $serializeSession(::Bedrock::SessionInfo const& session) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Bedrock::SessionInfo> $deserializeSession(std::string_view) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Bedrock::SessionInfo> $deserializeSession(::std::string_view contents) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
