#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk689353;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HeaderCollection& operator=(HeaderCollection const&);
    HeaderCollection(HeaderCollection const&);
    HeaderCollection();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HeaderCollection(::Bedrock::Http::HeaderCollection&&);
#else // @header-generator platform
    MCNAPI void _addHeader(::std::string const& headerName, ::std::string const& headerValue, bool setValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addHeader(std::string const&, std::string const&, bool const);
#else // @header-generator platform
    MCNAPI void add(::std::string const& headerName, ::std::string const& headerValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::std::string const& get(::std::string const& headerName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__hash_map_const_iterator<
        std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void*>*>>
    begin() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void merge(::Bedrock::Http::HeaderCollection rhs);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__hash_map_const_iterator<
        std::__hash_const_iterator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void*>*>>
    end() const;
#else // @header-generator platform
    MCNAPI void set(::std::string const& headerName, ::std::string const& headerValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& get(std::string const&) const;

    MCNAPI void set(std::string const&, std::string const&);

    MCNAPI void setNoSafetyChecks(std::string const&, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void setNoSafetyChecks(::std::string const& headerName, ::std::string const& headerValue);
#endif
#endif // @header-generator platform

    MCNAPI ~HeaderCollection();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Http::HeaderCollection&&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
