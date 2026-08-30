#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class ResourcePackManager;
struct OptionalString;
// clang-format on

class Localization {
public:
    // Localization inner types define
    using Map = std::map<std::string, std::string>;

    using StoreLocMap = std::unordered_multimap<std::string, std::pair<std::string, std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                               mCommaSeperator;
    ::ll::TypedStorage<8, 24, std::string const>                       mDigitGroupSeparator;
    ::ll::TypedStorage<8, 24, std::string const>                       mCode;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>      mStrings;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>      mCaseSensitiveCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::shared_timed_mutex>> mCaseSensitiveCacheMutex;
    ::ll::TypedStorage<1, 1, bool>                                     mMayContainIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    Localization& operator=(Localization const&);
    Localization();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Localization(std::string const&);

    MCNAPI Localization(::Localization const&);

    MCNAPI Localization(::Localization&&);

    MCNAPI Localization(std::string const&, ::Localization const*);

    MCNAPI ::OptionalString _get(std::string const&, std::vector<std::string> const&) const;

    MCNAPI ::OptionalString _getSimple(std::string const&) const;

    MCNAPI void appendTranslations(::Localization const&);

    MCNAPI void appendTranslations(
        std::string const&,
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::string const&
    );

    MCNAPI bool get(std::string const&, std::string&, std::vector<std::string> const&) const;

    MCNAPI bool getCommaSeperator() const;

    MCNAPI std::string const getDigitGroupSeparator() const;

    MCNAPI std::string getFullLanguageCode() const;

    MCNAPI std::string getIETFLanguageCode() const;

    MCNAPI std::string getLanguageCode() const;

    MCNAPI std::string getRegionCode() const;

    MCNAPI bool getStringIdExists(std::string const&) const;

    MCNAPI bool isLocReady() const;

    MCNAPI void loadFromResourcePackManager(::ResourcePackManager&, std::vector<std::string> const&);

    MCNAPI ~Localization();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string _getDigitGroupSeparator(std::string const&);

    MCNAPI static bool _isCommaSeperatedLanguage(std::string const&);

    MCNAPI static ::Core::PathBuffer<std::string> getLangFilePath(std::string const&);

    MCNAPI static std::string getLanguageCode(std::string const&);

    MCNAPI static std::string getRegionCode(std::string const&);

    MCNAPI static bool isFormattedString(std::string const&);

    MCNAPI static bool isValidLanguageCode(std::string const&);

    MCNAPI static void replaceTokens(std::string&, std::vector<std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(::Localization const&);

    MCNAPI void* $ctor(::Localization&&);

    MCNAPI void* $ctor(std::string const&, ::Localization const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
