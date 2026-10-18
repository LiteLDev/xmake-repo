#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class PackAccessStrategy;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
struct OptionalString;
// clang-format on

class Localization {
public:
    // Localization inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Map = std::map<std::string, std::string>;
#else // @header-generator platform
    using Map = ::std::map<::std::string, ::std::string>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using StoreLocMap = std::unordered_multimap<std::string, std::pair<std::string, std::string>>;
#else // @header-generator platform
    using StoreLocMap = ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                               mCommaSeperator;
    ::ll::TypedStorage<8, 24, std::string const>                       mDigitGroupSeparator;
    ::ll::TypedStorage<8, 24, std::string const>                       mCode;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>      mStrings;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>>      mCaseSensitiveCache;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::shared_timed_mutex>> mCaseSensitiveCacheMutex;
    ::ll::TypedStorage<1, 1, bool>                                     mMayContainIdentifier;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                                mCommaSeperator;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mDigitGroupSeparator;
    ::ll::TypedStorage<8, 32, ::std::string const>                      mCode;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>> mStrings;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::string>> mCaseSensitiveCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::shared_mutex>>    mCaseSensitiveCacheMutex;
    ::ll::TypedStorage<1, 1, bool>                                      mMayContainIdentifier;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Localization& operator=(Localization const&);
    Localization();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Localization(std::string const&);
#else // @header-generator platform
    MCAPI explicit Localization(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Localization(::Localization const&);
#else // @header-generator platform
    MCAPI Localization(::Localization&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Localization(::Localization&&);
#else // @header-generator platform
    MCAPI Localization(::Localization const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Localization(std::string const&, ::Localization const*);
#else // @header-generator platform
    MCAPI Localization(::std::string const& code, ::Localization const* fallbackLocale);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OptionalString _get(std::string const&, std::vector<std::string> const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::OptionalString _get(::std::string const& id, ::std::vector<::std::string> const& params) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OptionalString _getSimple(std::string const&) const;
#else // @header-generator platform
    MCAPI ::OptionalString _getSimple(::std::string const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void appendTranslations(::Localization const&);
#else // @header-generator platform
    MCAPI void addKeys(::Localization&& from);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void appendTranslations(
        std::string const&,
        std::vector<std::string> const&,
        std::vector<std::string> const&,
        std::string const&
#else // @header-generator platform
    MCAPI void appendTranslations(::Localization const& other);

    MCAPI void appendTranslations(
        ::std::string const&                fileContent,
        ::std::vector<::std::string> const& blockedKeys,
        ::std::vector<::std::string> const& allowedKeys,
        ::std::string const&                keyPrefix
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool get(std::string const&, std::string&, std::vector<std::string> const&) const;
#else // @header-generator platform
    MCAPI bool get(::std::string const& id, ::std::string& out, ::std::vector<::std::string> const& params) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getCommaSeperator() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD ::std::string const getDigitGroupSeparator() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const getDigitGroupSeparator() const;
#else // @header-generator platform
    MCFOLD ::std::string getFullLanguageCode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getFullLanguageCode() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getIETFLanguageCode() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getIETFLanguageCode() const;
#else // @header-generator platform
    MCAPI void loadFromResourcePackManager(
        ::ResourcePackManager&              resourcePackManager,
        ::std::vector<::std::string> const& blockedKeys
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getLanguageCode() const;

    MCNAPI std::string getRegionCode() const;

    MCNAPI bool getStringIdExists(std::string const&) const;

    MCNAPI bool isLocReady() const;

    MCNAPI void loadFromResourcePackManager(::ResourcePackManager&, std::vector<std::string> const&);

    MCNAPI ~Localization();
#else // @header-generator platform
    MCAPI ~Localization();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string _getDigitGroupSeparator(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string _getDigitGroupSeparator(::std::string const& langCode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _isCommaSeperatedLanguage(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static ::std::string _getDigitGroupSeparator(::std::string const& langCode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> getLangFilePath(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static bool _isCommaSeperatedLanguage(::std::string const& langCode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getLanguageCode(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI static bool _isCommaSeperatedLanguage(::std::string const& langCode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getRegionCode(std::string const&);
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::std::string> getLangFilePath(::std::string const& langCode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isFormattedString(std::string const&);

    MCNAPI static bool isValidLanguageCode(std::string const&);

    MCNAPI static void replaceTokens(std::string&, std::vector<std::string> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string getLanguageCode(::std::string const& fullCode);

    MCAPI static ::std::string getRegionCode(::std::string const& fullCode);

    MCAPI static void replaceTokens(::std::string& string, ::std::vector<::std::string> const& params);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Localization const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Localization&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Localization&&);
#else // @header-generator platform
    MCAPI void* $ctor(::Localization const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::Localization const*);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& code, ::Localization const* fallbackLocale);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
