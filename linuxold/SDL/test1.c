#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>


int main(int argc, char  *argv[])
{  
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Surface*  f=NULL;
	f=SDL_SetVideoMode(500,500,32,SDL_HWSURFACE);
	  SDL_FillRect(f,NULL,SDL_MapRGB(f->format,255,0,0));
	  SDL_Flip(f);
      SDL_Event e;
      SDL_Surface* f2=NULL;
      f2=SDL_CreateRGBSurface(SDL_HWSURFACE,50,50,32,0,0,0,0);
      SDL_FillRect(f2,NULL,SDL_MapRGB(f->format,0,255,0));
      SDL_Rect pos;
      pos.x=0;pos.y=0;
      SDL_BlitSurface(f2,NULL,f,&pos);
      SDL_Flip(f);
      while(1)
      {
      	 SDL_WaitEvent(&e);

      if (e.type==SDL_QUIT) break;
    
      }
    SDL_FreeSurface(f2);
    SDL_FreeSurface(f);
	SDL_Quit();//atexit(SDL_Quit) SDL_Delay( 3000 );
	return 0;
}