#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/DeferralType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class DeferredSubscription; }
// clang-format on

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldRecovery : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<Bedrock::WorldRecovery> {
#else // @header-generator platform
class WorldRecovery : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<::Bedrock::WorldRecovery> {
#endif // @header-generator platform
public:
    // WorldRecovery inner types declare
    // clang-format off
    struct RecoveryResult;
    struct RecoveryUpdate;
    // clang-format on

    // WorldRecovery inner types define
    struct RecoveryResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mError;
        ::ll::TypedStorage<8, 24, std::string> mDestPath;
        ::ll::TypedStorage<8, 8, ulong>        mBytesNeeded;
        ::ll::TypedStorage<8, 8, ulong>        mBytesAvailable;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk98d9a3;
        ::ll::UntypedStorage<8, 32> mUnk4b8910;
        ::ll::UntypedStorage<8, 8>  mUnk990243;
        ::ll::UntypedStorage<8, 8>  mUnk3d5990;
#endif // @header-generator platform
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        RecoveryResult& operator=(RecoveryResult const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        RecoveryResult& operator=(RecoveryResult const&);
        RecoveryResult(RecoveryResult const&);
        RecoveryResult();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        RecoveryResult& operator=(RecoveryResult const&);
        RecoveryResult();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~RecoveryResult();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI RecoveryResult(::Bedrock::WorldRecovery::RecoveryResult const&);

        MCNAPI ~RecoveryResult();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::Bedrock::WorldRecovery::RecoveryResult const&);
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

    struct RecoveryUpdate {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mStatus;
        ::ll::TypedStorage<4, 4, uint>         mFilesTotal;
        ::ll::TypedStorage<4, 4, uint>         mFilesCompleted;
        ::ll::TypedStorage<8, 8, ulong>        mBytesTotal;
        ::ll::TypedStorage<8, 8, ulong>        mBytesCompleted;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkdb0b97;
        ::ll::UntypedStorage<4, 4>  mUnk97ab87;
        ::ll::UntypedStorage<4, 4>  mUnkd88b56;
        ::ll::UntypedStorage<8, 8>  mUnkd29cbd;
        ::ll::UntypedStorage<8, 8>  mUnkcd04b0;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        RecoveryUpdate& operator=(RecoveryUpdate const&);
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
        RecoveryUpdate(RecoveryUpdate const&);
        RecoveryUpdate();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using RecoveryUpdateFn = std::function<void(const Bedrock::WorldRecovery::RecoveryUpdate&)>;
#else // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~RecoveryUpdate();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WorldRecovery() = default;

#else // @header-generator platform
#endif // @header-generator platform
    virtual void initialize() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::tuple<Bedrock::Threading::Async<Bedrock::WorldRecovery::RecoveryResult>, Bedrock::PubSub::DeferredSubscription> doRecovery(std::string_view, std::function<void (const Bedrock::WorldRecovery::RecoveryUpdate&)>, ::Bedrock::PubSub::DeferralType) = 0;
#else // @header-generator platform
    virtual ::std::tuple<
        ::Bedrock::Threading::Async<::Bedrock::WorldRecovery::RecoveryResult>,
        ::Bedrock::PubSub::DeferredSubscription>
        doRecovery(
            ::std::string_view,
            ::std::function<void(::Bedrock::WorldRecovery::RecoveryUpdate const&)>,
            ::Bedrock::PubSub::DeferralType
        ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& getRecoveryDestinationPath() const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& getRecoveryDestinationPath() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
