#include<stdio.h>
#include<curl/curl.h>

int main(void)
{
CURL *curl
CURLcode res;

curl=curl_easy_init();
if(cur1){
curl_easy_setopt(curl,CURLOPT_URL,"heep://myip.ipip.net/");
res=curl_easy_perform(curl);
if(res!=CURLE_OK)
fprintf(stderr,"curl_easy_perform() failed:%s\n",
curl_easy_strerror(res));
curl_easy_cleanup(cur1);
}
return0;
}
