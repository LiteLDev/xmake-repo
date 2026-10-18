#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Puv { template<typename T0> class LoggerIterator; }
// clang-format on
#else // @header-generator platform
#include "mc/deps/puv/LoggerIterator.h"
#endif // @header-generator platform

namespace Puv {

class Logger {
public:
    // Logger inner types declare
    // clang-format off
    struct ParseLogEntry;
    struct UpgradeLogEntry;
    struct ValidationLogEntry;
    // clang-format on

    // Logger inner types define
    enum class UpgradeResultCode : uchar {
        // bitfield representation
#if defined(LL_PLAT_A) // @header-generator platform
        unsupported_version   = 1 << 0,
        src_error             = 1 << 1,
        dst_error             = 1 << 2,
        internal_error        = 1 << 3,
        copy_error            = 1 << 4,
        _entt_enum_as_bitmask = 255,
        all                   = 255,
#else // @header-generator platform
        UnsupportedVersion = 1 << 0,
        SrcError           = 1 << 1,
        DstError           = 1 << 2,
        InternalError      = 1 << 3,
        CopyError          = 1 << 4,
        EnttEnumAsBitmask  = 255,
        All                = 255,
#endif // @header-generator platform
    };

    enum class ValidationResultCode : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
        warning               = 1,
        error                 = 2,
        all                   = 255,
        _entt_enum_as_bitmask = 255,
#else // @header-generator platform
        Warning           = 1,
        Error             = 2,
        All               = 255,
        EnttEnumAsBitmask = 255,
#endif // @header-generator platform
    };

    struct ParseLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<2, 2, ::cereal::ResultCode> mResultCode;
        ::ll::UntypedStorage<8, 24>                    mContext;
        ::ll::TypedStorage<8, 24, std::string>         mMessage;
#else // @header-generator platform
        ::ll::UntypedStorage<2, 2>  mUnk3e9543;
        ::ll::UntypedStorage<8, 24> mUnkb41697;
        ::ll::UntypedStorage<8, 32> mUnkd44d5c;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseLogEntry& operator=(ParseLogEntry const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ParseLogEntry();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ParseLogEntry();
#else // @header-generator platform
        MCNAPI ParseLogEntry(::Puv::Logger::ParseLogEntry const&);
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCNAPI void* $ctor(::Puv::Logger::ParseLogEntry const&);
#endif // @header-generator platform
        // NOLINTEND
    };

    struct UpgradeLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::Puv::Logger::UpgradeResultCode> mResultCode;
        ::ll::UntypedStorage<8, 24>                                mContextSrc;
        ::ll::UntypedStorage<8, 24>                                mContextDst;
        ::ll::TypedStorage<8, 24, std::string>                     mMessage;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1>  mUnkecd095;
        ::ll::UntypedStorage<8, 24> mUnk4f5fdc;
        ::ll::UntypedStorage<8, 24> mUnk89974d;
        ::ll::UntypedStorage<8, 32> mUnk615a04;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        UpgradeLogEntry& operator=(UpgradeLogEntry const&);
        UpgradeLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~UpgradeLogEntry();
#else // @header-generator platform
        MCNAPI UpgradeLogEntry(::Puv::Logger::UpgradeLogEntry const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Puv::Logger::UpgradeLogEntry const&);
        // NOLINTEND
    };

    struct ValidationLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkfab5d3;
        ::ll::UntypedStorage<8, 32> mUnkb040ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        ValidationLogEntry& operator=(ValidationLogEntry const&);
        ValidationLogEntry(ValidationLogEntry const&);
        ValidationLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ValidationLogEntry();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct ValidationLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Puv::Logger::ValidationResultCode> mResultCode;
        ::ll::TypedStorage<8, 24, std::string>                        mMessage;
        // NOLINTEND

    public:
        // prevent constructor by default
        ValidationLogEntry& operator=(ValidationLogEntry const&);
        ValidationLogEntry();
    };

    using ParseResultCode = ::cereal::ResultCode;

    using ParseLogIterable = ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::ParseLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::ParseLogEntry*>>;

    using UpgradeLogIterable = ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::UpgradeLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::UpgradeLogEntry*>>;

    using ValidationLogIterable = ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::ValidationLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::ValidationLogEntry*>>;

    using ContextType = ::cereal::BasicSerializerContext::ContextType;

    using Context = std::pair<cereal::BasicSerializerContext::ContextType, std::string>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Puv::Logger::ParseLogEntry>>      mParseLog;
    ::ll::TypedStorage<8, 24, std::vector<Puv::Logger::UpgradeLogEntry>>    mUpgradeLog;
    ::ll::TypedStorage<8, 24, std::vector<Puv::Logger::ValidationLogEntry>> mValidationLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                          mParseErrorCodes;
    ::ll::TypedStorage<1, 1, ::Puv::Logger::UpgradeResultCode>              mUpgradeErrorCodes;
    ::ll::TypedStorage<1, 1, ::Puv::Logger::ValidationResultCode>           mValidationErrorCodes;
    ::ll::TypedStorage<1, 1, bool>                                          mHasErrors;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk2f69a4;
    ::ll::UntypedStorage<8, 24> mUnkb27419;
    ::ll::UntypedStorage<8, 24> mUnk9fdd72;
    ::ll::UntypedStorage<2, 2>  mUnka1ba32;
    ::ll::UntypedStorage<1, 1>  mUnk3c26f9;
    ::ll::UntypedStorage<1, 1>  mUnka0317f;
    ::ll::UntypedStorage<1, 1>  mUnkbcb18b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Logger& operator=(Logger const&);
#endif // @header-generator platform
    Logger();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::ParseLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::ParseLogEntry*>>
        getParseLog(::cereal::ResultCode) const;
#else // @header-generator platform
    MCNAPI Logger(::Puv::Logger const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::UpgradeLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::UpgradeLogEntry*>>
        getUpgradeLog(::Puv::Logger::UpgradeResultCode) const;

    MCNAPI ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::ValidationLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::ValidationLogEntry*>>
        getValidationLog(::Puv::Logger::ValidationResultCode) const;

    MCNAPI bool hasErrors() const;

    MCNAPI ::Puv::Logger& log(::Puv::Logger::ValidationResultCode, std::string);
#else // @header-generator platform
    MCNAPI ::Puv::Logger& log(::Puv::Logger::ValidationResultCode res, ::std::string msg);
#endif // @header-generator platform

    MCNAPI ::Puv::Logger&
#if defined(LL_PLAT_A) // @header-generator platform
        log(::cereal::ResultCode,
            std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>>,
            std::string);
#else // @header-generator platform
    log(::cereal::ResultCode                                                                     res,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> path,
        ::std::string                                                                            msg);
#endif // @header-generator platform

    MCNAPI ::Puv::Logger&
#if defined(LL_PLAT_A) // @header-generator platform
        log(::Puv::Logger::UpgradeResultCode,
            std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>>,
            std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>>,
            std::string);
#else // @header-generator platform
    log(::Puv::Logger::UpgradeResultCode                                                         res,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> src,
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> dst,
        ::std::string                                                                            msg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::Logger& operator=(::Puv::Logger&&);

    MCNAPI ::cereal::ResultCode parseErrorCodes() const;

    MCNAPI ::Puv::Logger::UpgradeResultCode upgradeErrorCodes() const;

    MCNAPI ::Puv::Logger::ValidationResultCode validationErrorCodes() const;
#else // @header-generator platform
    MCNAPI void merge(::Puv::Logger log);
#endif // @header-generator platform

    MCNAPI ~Logger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string
    contextString(std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>> const&);
#else // @header-generator platform
    MCNAPI static ::std::string contextString(
        ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> const& contextStack
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::Logger const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
