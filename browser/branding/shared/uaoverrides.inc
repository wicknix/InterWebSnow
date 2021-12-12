#define GUAO_PREF general.useragent.override

#define GRE_VERSION @MOZILLA_UAVERSION_U@
#define GRE_VERSION_SLICE Goanna/@GRE_VERSION@
#define GRE_DATE_SLICE Goanna/20170101
#define APP_SLICE Basilisk/@MOZ_APP_VERSION@

#define GK_VERSION 52.0
#define GK_SLICE Gecko/20100101
#define FX_SLICE Firefox/@GK_VERSION@

#ifdef XP_UNIX
#ifndef XP_MACOSX
#define OS_SLICE X11; Linux x86_64;
#else
#define OS_SLICE Macintosh; Intel Mac OS X 10.11;
#endif
#else
#define OS_SLICE Windows NT 6.1; WOW64;
#endif

// FxA override
pref("@GUAO_PREF@.accounts.firefox.com", "Mozilla/5.0 (@OS_SLICE@ rv:@GK_VERSION@) @GK_SLICE@ @FX_SLICE@");
// TRY to get basilisk addons site to think we ARE basilisk
pref("general.useragent.override.addons.palemoon.org", "Mozilla/5.0 (X11; Linux x86_64; rv:68.0) Gecko/20100101 Goanna/4.8 Firefox/68.0 PaleMoon/29.4.1");
pref("general.useragent.override.addons.basilisk-browser.org", "Mozilla/5.0 (X11; Linux x86_64; rv:68.0) Gecko/20100101 Goanna/4.8 Firefox/68.0 Basilisk/52.9.2021.09.27");

// Required for domains that have proven unresponsive to requests from users

// The never-ending Facebook debacle...

// UA-Sniffing domains below are pending responses from their operators - temp workaround

// The following requires native mode. Or it blocks.. "too old firefox", breakage, etc.

// UA-Sniffing domains below have indicated no interest in supporting Pale Moon (BOO!)

// UA-sniffing domains that are "app/vendor-specific" and do not like Pale Moon

// The following domains do not like the Goanna slice

