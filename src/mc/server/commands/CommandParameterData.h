#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandOrigin.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

// auto generated forward declare list
// clang-format off
class Command;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CommandOrigin;
class CommandRegistry;
#endif // @header-generator platform
// clang-format on

class CommandParameterData {
public:
    // CommandParameterData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using CustomStorageGetFn = void* (*)(::Command*, int);

    using CustomStorageIsSetFn = bool* (*)(::Command*, int);

#endif // @header-generator platform
    using ParseFunction = bool (CommandRegistry::*)(
        void*,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
#if defined(LL_PLAT_A) // @header-generator platform
        std::string&,
        std::vector<std::string>&
#else // @header-generator platform
        ::std::string&,
        ::std::vector<::std::string>&
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform

    using CustomStorageGetFn = void* (*)(::Command*, int);

    using CustomStorageIsSetFn = bool* (*)(::Command*, int);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 2>                           mTypeIndex;
    ::ll::UntypedStorage<8, 8>                           mParseRule;
    ::ll::UntypedStorage<8, 16>                          mParseOverride;
    ::ll::TypedStorage<8, 24, std::string>               mName;
    ::ll::TypedStorage<8, 8, char const*>                mEnumNameOrPostfix;
    ::ll::TypedStorage<4, 4, int>                        mEnumOrPostfixSymbol;
    ::ll::TypedStorage<8, 8, char const*>                mChainedSubcommand;
    ::ll::TypedStorage<4, 4, int>                        mChainedSubcommandSymbol;
    ::ll::TypedStorage<4, 4, ::CommandParameterDataType> mParamType;
    ::ll::TypedStorage<4, 4, int>                        mOffset;
    ::ll::TypedStorage<4, 4, int>                        mSetOffset;
    ::ll::TypedStorage<1, 1, bool>                       mIsOptional;
    ::ll::TypedStorage<1, 1, ::CommandParameterOption>   mOptions;
    ::ll::TypedStorage<8, 8, void* (*)(::Command*, int)> mValueGetFn;
    ::ll::TypedStorage<8, 8, bool* (*)(::Command*, int)> mValueIsSetFn;
#else // @header-generator platform
    ::Bedrock::typeid_t<::CommandRegistry>               mTypeIndex;
    ::CommandRegistry::ParamParseRule const*             mParseRule;
    ParseFunction                                        mParseOverride;
    ::std::string                                        mName;
    char const*                                          mEnumNameOrPostfix;
    CommandRegistry::Symbol                              mEnumOrPostfixSymbol;
    char const*                                          mChainedSubcommand;
    CommandRegistry::Symbol                              mChainedSubcommandSymbol;
    ::CommandParameterDataType                           mParamType;
    int                                                  mOffset;
    int                                                  mSetOffset;
    bool                                                 mIsOptional;
    ::CommandParameterOption                             mOptions;
    ::ll::TypedStorage<8, 8, void* (*)(::Command*, int)> mValueGetFn{};
    ::ll::TypedStorage<8, 8, bool* (*)(::Command*, int)> mValueIsSetFn{};
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CommandParameterData();
#else // @header-generator platform
    void addOptions(::CommandParameterOption option) {
        using T  = std::underlying_type_t<::CommandParameterOption>;
        mOptions = static_cast<::CommandParameterOption>((T)option | (T)mOptions);
    }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandParameterData(
        ::Bedrock::typeid_t<CommandRegistry>,
        ::CommandRegistry::ParamParseRule const*,
        char const*,
        ::CommandParameterDataType,
        char const*,
        int,
        bool,
        void* (*)(::Command*, int),
        bool* (*)(::Command*, int)
#else // @header-generator platform
    CommandParameterData() = default;

    LLNDAPI CommandParameterData(
        Bedrock::typeid_t<CommandRegistry>       typeIndex,
        ParseFunction                            parser,
        std::string                              name,
        ::CommandParameterDataType               type,
        char const*                              enumNameOrPostfix,
        char const*                              subChain,
        int                                      offset,
        bool                                     optional,
        int                                      flagOffset,
        CommandParameterOption                   options,
        ::CommandRegistry::ParamParseRule const* rule
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandParameterData& addOptions(::CommandParameterOption);
    // NOLINTEND
#else // @header-generator platform
    LLNDAPI bool operator==(CommandParameterData const& other) const;

    CommandParameterData(CommandParameterData const&)            = default;
    CommandParameterData& operator=(CommandParameterData const&) = default;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::typeid_t<CommandRegistry>,
        ::CommandRegistry::ParamParseRule const*,
        char const*,
        ::CommandParameterDataType,
        char const*,
        int,
        bool,
        void* (*)(::Command*, int),
        bool* (*)(::Command*, int)
    );
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
