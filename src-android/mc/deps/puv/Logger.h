#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace Puv { template<typename T0> class LoggerIterator; }
// clang-format on

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
        unsupported_version   = 1 << 0,
        src_error             = 1 << 1,
        dst_error             = 1 << 2,
        internal_error        = 1 << 3,
        copy_error            = 1 << 4,
        _entt_enum_as_bitmask = 255,
        all                   = 255,
    };

    enum class ValidationResultCode : uchar {
        warning               = 1,
        error                 = 2,
        all                   = 255,
        _entt_enum_as_bitmask = 255,
    };

    struct ParseLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::cereal::ResultCode> mResultCode;
        ::ll::UntypedStorage<8, 24>                    mContext;
        ::ll::TypedStorage<8, 24, std::string>         mMessage;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseLogEntry& operator=(ParseLogEntry const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ParseLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct UpgradeLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::Puv::Logger::UpgradeResultCode> mResultCode;
        ::ll::UntypedStorage<8, 24>                                mContextSrc;
        ::ll::UntypedStorage<8, 24>                                mContextDst;
        ::ll::TypedStorage<8, 24, std::string>                     mMessage;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpgradeLogEntry& operator=(UpgradeLogEntry const&);
        UpgradeLogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UpgradeLogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Puv::Logger::ParseLogEntry>>      mParseLog;
    ::ll::TypedStorage<8, 24, std::vector<Puv::Logger::UpgradeLogEntry>>    mUpgradeLog;
    ::ll::TypedStorage<8, 24, std::vector<Puv::Logger::ValidationLogEntry>> mValidationLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                          mParseErrorCodes;
    ::ll::TypedStorage<1, 1, ::Puv::Logger::UpgradeResultCode>              mUpgradeErrorCodes;
    ::ll::TypedStorage<1, 1, ::Puv::Logger::ValidationResultCode>           mValidationErrorCodes;
    ::ll::TypedStorage<1, 1, bool>                                          mHasErrors;
    // NOLINTEND

public:
    // prevent constructor by default
    Logger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::iterable_adaptor<
        Puv::LoggerIterator<const Puv::Logger::ParseLogEntry*>,
        Puv::LoggerIterator<const Puv::Logger::ParseLogEntry*>>
        getParseLog(::cereal::ResultCode) const;

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

    MCNAPI ::Puv::Logger&
        log(::cereal::ResultCode,
            std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>>,
            std::string);

    MCNAPI ::Puv::Logger&
        log(::Puv::Logger::UpgradeResultCode,
            std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>>,
            std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>>,
            std::string);

    MCNAPI ::Puv::Logger& operator=(::Puv::Logger&&);

    MCNAPI ::cereal::ResultCode parseErrorCodes() const;

    MCNAPI ::Puv::Logger::UpgradeResultCode upgradeErrorCodes() const;

    MCNAPI ::Puv::Logger::ValidationResultCode validationErrorCodes() const;

    MCNAPI ~Logger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string
    contextString(std::vector<std::pair<cereal::BasicSerializerContext::ContextType, std::string>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
