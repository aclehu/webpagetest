typedef struct {
	char * pattern;
	TCHAR * name;
} CDN_PROVIDER;

CDN_PROVIDER cdnList[] = {
	{".akamai.net", _T("Akamai")},
	{".akamaized.net", _T("Akamai")},
	{".akamaiedge.net", _T("Akamai")},
	{".akamaihd.net", _T("Akamai")},
	{".edgesuite.net", _T("Akamai")},
	{".edgekey.net", _T("Akamai")},
	{".srip.net", _T("Akamai")},
	{".akamaitechnologies.com", _T("Akamai")},
	{".akamaitechnologies.fr", _T("Akamai")},
	{".tl88.net", _T("Akamai China CDN")},
	{".llnwd.net", _T("Limelight")},
	{"edgecastcdn.net", _T("Edgecast")},
	{".systemcdn.net", _T("Edgecast")},
	{".transactcdn.net", _T("Edgecast")},
	{".v1cdn.net", _T("Edgecast")},
	{".v2cdn.net", _T("Edgecast")},
	{".v3cdn.net", _T("Edgecast")},
	{".v4cdn.net", _T("Edgecast")},
	{".v5cdn.net", _T("Edgecast")},
	{"hwcdn.net", _T("Highwinds")},
	{".simplecdn.net", _T("Simple CDN")},
	{".instacontent.net", _T("Mirror Image")},
	{".footprint.net", _T("Level 3")},
	{".fpbns.net", _T("Level 3")},
	{".ay1.b.yahoo.com", _T("Yahoo")},
	{".yimg.", _T("Yahoo")},
	{".yahooapis.com", _T("Yahoo")},
	{".google.", _T("Google")},
	{"googlesyndication.", _T("Google")},
	{"youtube.", _T("Google")},
	{".googleusercontent.com", _T("Google")},
	{"googlehosted.com", _T("Google")},
	{".gstatic.com", _T("Google")},
	{".doubleclick.net", _T("Google")},
	{".insnw.net", _T("Instart Logic")},
	{".inscname.net", _T("Instart Logic")},
	{".internapcdn.net", _T("Internap")},
	{".cloudfront.net", _T("Amazon CloudFront")},
	{".netdna-cdn.com", _T("NetDNA")},
	{".netdna-ssl.com", _T("NetDNA")},
	{".netdna.com", _T("NetDNA")},
	{".kxcdn.com", _T("KeyCDN")},
	{".cotcdn.net", _T("Cotendo CDN")},
	{".cachefly.net", _T("Cachefly")},
	{"bo.lt", _T("BO.LT")},
	{".cloudflare.com", _T("Cloudflare")},
	{".afxcdn.net", _T("afxcdn.net")},
	{".lxdns.com", _T("ChinaNetCenter")},
	{".wscdns.com", _T("ChinaNetCenter")},
	{".wscloudcdn.com", _T("ChinaNetCenter")},
	{".ourwebpic.com", _T("ChinaNetCenter")},
	{".att-dsa.net", _T("AT&T")},
	{".vo.msecnd.net", _T("Microsoft Azure")},
	{".azureedge.net", _T("Microsoft Azure")},
	{".voxcdn.net", _T("VoxCDN")},
	{".bluehatnetwork.com", _T("Blue Hat Network")},
	{".swiftcdn1.com", _T("SwiftCDN")},
	{".cdngc.net", _T("CDNetworks")},
	{".gccdn.net", _T("CDNetworks")},
	{".panthercdn.com", _T("CDNetworks")},
	{".fastly.net", _T("Fastly")},
	{".fastlylb.net", _T("Fastly")},
	{".nocookie.net", _T("Fastly")},
	{".gslb.taobao.com", _T("Taobao")},
	{".gslb.tbcache.com", _T("Alimama")},
	{".mirror-image.net", _T("Mirror Image")},
	{".yottaa.net", _T("Yottaa")},
	{".cubecdn.net", _T("cubeCDN")},
	{".cdn77.net", _T("CDN77")},
	{".cdn77.org", _T("CDN77")},
	{".incapdns.net", _T("Incapsula")},
	{".bitgravity.com", _T("BitGravity")},
	{".r.worldcdn.net", _T("OnApp")},
	{".r.worldssl.net", _T("OnApp")},
	{"tbcdn.cn", _T("Taobao")},
	{".taobaocdn.com", _T("Taobao")},
	{".ngenix.net", _T("NGENIX")},
	{".pagerain.net", _T("PageRain")},
	{".ccgslb.com", _T("ChinaCache")},
	{"cdn.sfr.net", _T("SFR")},
	{".azioncdn.net", _T("Azion")},
	{".azioncdn.com", _T("Azion")},
	{".azion.net", _T("Azion")},
	{".cdncloud.net.au", _T("MediaCloud")},
	{".rncdn1.com", _T("Reflected Networks")},
	{".cdnsun.net", _T("CDNsun")},
	{".mncdn.com", _T("Medianova")},
	{".mncdn.net", _T("Medianova")},
	{".mncdn.org", _T("Medianova")},
	{"cdn.jsdelivr.net", _T("jsDelivr")},
	{".nyiftw.net", _T("NYI FTW")},
	{".nyiftw.com", _T("NYI FTW")},
	{".resrc.it", _T("ReSRC.it")},
	{".zenedge.net", _T("Zenedge")},
	{".lswcdn.net", _T("LeaseWeb CDN")},
	{".lswcdn.eu", _T("LeaseWeb CDN")},
	{".revcn.net", _T("Rev Software")},
	{".revdn.net", _T("Rev Software")},
	{".caspowa.com", _T("Caspowa")},
	{".twimg.com", _T("Twitter")},
	{".facebook.com", _T("Facebook")},
	{".facebook.net", _T("Facebook")},
	{".fbcdn.net", _T("Facebook")},
	{".cdninstagram.com", _T("Facebook")},
	{".rlcdn.com", _T("Reapleaf")},
	{".wp.com", _T("WordPress")},
	{".aads1.net", _T("Aryaka")},
	{".aads-cn.net", _T("Aryaka")},
	{".aads-cng.net", _T("Aryaka")},
	{".squixa.net", _T("section.io")},
	{".bisongrid.net", _T("Bison Grid")},
	{".cdn.gocache.net", _T("GoCache")},
	{".hiberniacdn.com", "HiberniaCDN"},
	{".cdntel.net", _T("Telenor")},
	{".raxcdn.com", _T("Rackspace")},
	{".unicorncdn.net", _T("UnicornCDN")},
	{".optimalcdn.com", _T("Optimal CDN")},
	{".hosting4cdn.com", _T("Hosting4CDN")},
	{".netlify.com", _T("Netlify")},
	{".roast.io", _T("Roast.io")},
	{NULL, NULL}
};

typedef struct {
	char * response_field;
	char * pattern;
	TCHAR * name;
} CDN_PROVIDER_HEADER;

CDN_PROVIDER_HEADER cdnHeaderList[] = {
	{"server", "cloudflare", _T("Cloudflare")},
	{"server", "ECS", _T("Edgecast")},
	{"server", "ECAcc", _T("Edgecast")},
	{"server", "ECD", _T("Edgecast")},
	{"server", "NetDNA", _T("NetDNA")},
	{"server", "Airee", _T("Airee")},
	{"X-CDN-Geo", "", _T("OVH CDN")},
	{"X-Px", "", _T("CDNetworks")},
	{"Via", "CloudFront", _T("Amazon CloudFront")},
	{"X-Edge-IP", "", _T("CDN")},
	{"X-Edge-Location", "", _T("CDN")},
	{"X-Powered-By", "NYI FTW", _T("NYI FTW")},
	{"server", "ReSRC", _T("ReSRC.it")},
	{"X-Cdn", "Zenedge", _T("Zenedge")},
	{"server", "leasewebcdn", _T("LeaseWeb CDN")},
	{"Via", "Rev-Cache", _T("Rev Software")},
	{"X-Rev-Cache", "", _T("Rev Software")},
	{"Server", "Caspowa", _T("Caspowa")},
	{"Server", "SurgeCDN", _T("Surge")},
	{"server", "sffe", _T("Google")},
	{"server", "gws", _T("Google")},
	{"server", "GSE", _T("Google")},
	{"server", "Golfe2", _T("Google")},
	{"Via", "google", _T("Google")},
	{"server", "tsa_b", _T("Twitter")},
	{"X-Cache", "cache.51cdn.com", _T("ChinaNetCenter")},
	{"X-CDN", "Incapsula", _T("Incapsula")},
	{"X-Iinfo", "", _T("Incapsula")},
	{"server", "gocache", _T("GoCache")},
	{"server", "Netlify", _T("Netlify")},
	{"server", "Roast.io", _T("Roast.io")}
};
