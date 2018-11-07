public static String callurl(String myurl)
{

StringBuilder sb = new StringBuilder();
URLConnection urlc = null;
InputStreamReader in = null;

try{
URL url = new URL(myurl);

urlc =url.openConnection();
if (urlc != null)
	urlc.setReadTimeout(60 * 1000);
if (urlc != null && urlc.getInputStream() != null)
{
in = new InputStreamReader(urlc.getInputStream(),Charset.defaultCharset());
BufferedReader bf = new BufferedReader(in);
if(bf != null)
{
int cp;
while((cp = bf.read()) !=-1)
	sb.append((char)cp);
bf.close();
}
}
in.close();

}
catch(Exception e)
{

}


return sb.toString(); ;
}
